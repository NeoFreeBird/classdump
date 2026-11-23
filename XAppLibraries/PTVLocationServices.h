//
#ifndef PTVLocationServices_h
#define PTVLocationServices_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "PTVLocationServicesDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSObject, NSString;

@interface PTVLocationServices : NSObject <CLLocationManagerDelegate> {
    /* instance variables */
    CLLocationManager *_locationManager;
    CLLocation *_lastRecordedLocation;
    double _lastRecordedHeading;
    NSDate *_lastRecordedTime;
    _Bool _isTrackingLocation;
}

@property (weak, nonatomic) id <PTVLocationServicesDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)HasPermissionToTrackLocation;
+ (_Bool)CanAttemptToTrackLocation;
+ (int)AuthorizationStatus;

/* instance methods */
- (void)dealloc;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (id)initWithDelegate:(id)delegate;
- (_Bool)shouldReportStandardUpdates:(id)updates heading:(double)heading;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (struct CLLocationCoordinate2D { double x0; double x1; })abstractedCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (void)requestWhenInUseAuthorization;

@end

#endif /* PTVLocationServices_h */
