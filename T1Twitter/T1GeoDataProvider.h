//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GeoDataProvider_h
#define T1GeoDataProvider_h
@import Foundation;

#include "TFSTwitterGeoDataProvider-Protocol.h"
#include "TSALocationManagerDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, TFSTwitterLocation, TSALocationManager;
@protocol OS_dispatch_queue;

@interface T1GeoDataProvider : NSObject <TFSTwitterGeoDataProvider, TSALocationManagerDelegate>

@property _Bool enabled;
@property (nonatomic) _Bool locationUpdateInProgress;
@property (nonatomic) unsigned long long validDispatchId;
@property (retain, nonatomic) TSALocationManager *locationManager;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain) TFSTwitterLocation *currentLocation;
@property _Bool locationServicesAvailable;
@property (copy) NSString *timezoneName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly) _Bool cachedLocationAvailable;
@property double locationUpdateInterval;
@property double locationUpdateDuration;
@property (readonly) _Bool usingRetainedGeoDataAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (_Bool)isEnabled;
- (_Bool)isCachedLocationAvailable;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (void)_checkAndRetriggerLocationUpdateWithCallback:(id /* block */)callback remainingAttempts:(unsigned long long)attempts;
- (void)getBestAvailableLocationWithCallback:(id /* block */)callback;
- (_Bool)isUsingRetainedGeoDataAllowed;
- (void)startUpdates;
- (void)stopUpdates;
- (void)_restartChainedLocationUpdate;
- (void)getLocationServicesAvailableWithCallback:(id /* block */)callback;
- (_Bool)_locationIsGoodEnoughForRealtimeResponse:(id)response;
- (_Bool)_newLocation:(id)location betterThanOldLocation:(id)location;
- (double)_scoreForLocation:(id)location;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)_locationManagerDidChangeAuthorizationStatus:(id)status;
- (void)_timezoneDidChange:(id)change;
- (void)_cancelableDispatchAfter:(double)after block:(id /* block */)block;
- (void)_handleRealtimeLocationData:(_Bool)data callback:(id /* block */)callback;
- (void)_startChainedLocationUpdate;

@end

#endif /* T1GeoDataProvider_h */
