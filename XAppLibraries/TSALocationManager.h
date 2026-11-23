//
#ifndef TSALocationManager_h
#define TSALocationManager_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSObject, NSString;
@protocol TSALocationManagerDelegate;

@interface TSALocationManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic) unsigned long long locationSubscribersCount;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) id <TSALocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (_Bool)locationServicesAvailable;
- (void)_tsa_assertDesiredAccuracyReflectsInfoPlist;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (int)_tsa_authorizationStatus;
- (void)_tsa_appWillEnterForeground:(id)foreground;
- (void)_tsa_appDidEnterBackground:(id)background;

@end

#endif /* TSALocationManager_h */
