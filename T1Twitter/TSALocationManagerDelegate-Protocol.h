//
#ifndef TSALocationManagerDelegate_Protocol_h
#define TSALocationManagerDelegate_Protocol_h
@import Foundation;

@protocol TSALocationManagerDelegate

@required

/* required instance methods */
- (void)locationManager:(id)manager didUpdateToLocation:(id)location;
- (void)locationManager:(id)manager didFailWithError:(id)error;

@optional

@end

#endif /* TSALocationManagerDelegate_Protocol_h */
