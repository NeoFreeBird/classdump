//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
