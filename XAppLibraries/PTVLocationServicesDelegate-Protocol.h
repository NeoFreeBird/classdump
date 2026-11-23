//
#ifndef PTVLocationServicesDelegate_Protocol_h
#define PTVLocationServicesDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVLocationServicesDelegate <NSObject>

@required

/* required instance methods */
- (void)standardUpdateUserLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location heading:(double)heading;
- (void)locationManagerFailedWithError:(id)error;

@optional

/* optional instance methods */
- (void)locationManagerDidChangeAuthorizationStatus:(int)status;

@end

#endif /* PTVLocationServicesDelegate_Protocol_h */
