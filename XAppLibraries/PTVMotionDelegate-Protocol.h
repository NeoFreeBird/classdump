//
#ifndef PTVMotionDelegate_Protocol_h
#define PTVMotionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVMotionDelegate <NSObject>

@required

/* required instance methods */
- (void)accelerometerDidUpdateAngle:(double)angle;

@optional

@end

#endif /* PTVMotionDelegate_Protocol_h */
