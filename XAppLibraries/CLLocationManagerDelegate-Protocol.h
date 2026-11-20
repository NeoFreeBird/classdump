//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CLLocationManagerDelegate_Protocol_h
#define CLLocationManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CLLocationManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)calibration;
- (void)locationManager:(id)manager didDetermineState:(long long)state forRegion:(id)region;
- (void)locationManager:(id)manager didDetermineState:(long long)state forRegion:(id)region;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons inRegion:(id)region;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons inRegion:(id)region;
- (void)locationManager:(id)manager rangingBeaconsDidFailForRegion:(id)region withError:(id)error;
- (void)locationManager:(id)manager rangingBeaconsDidFailForRegion:(id)region withError:(id)error;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons satisfyingConstraint:(id)constraint;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons satisfyingConstraint:(id)constraint;
- (void)locationManager:(id)manager didFailRangingBeaconsForConstraint:(id)constraint error:(id)error;
- (void)locationManager:(id)manager didFailRangingBeaconsForConstraint:(id)constraint error:(id)error;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)region withError:(id)error;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)region withError:(id)error;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManagerDidPauseLocationUpdates:(id)updates;
- (void)locationManagerDidResumeLocationUpdates:(id)updates;
- (void)locationManager:(id)manager didFinishDeferredUpdatesWithError:(id)error;
- (void)locationManager:(id)manager didVisit:(id)visit;

@end

#endif /* CLLocationManagerDelegate_Protocol_h */
