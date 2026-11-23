//
#ifndef PTVSharedDeviceMotionObserver_Protocol_h
#define PTVSharedDeviceMotionObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSharedDeviceMotionObserver <NSObject>

@required

/* required instance methods */
- (void)motionManagerDidDetectMotion:(id)motion error:(id)error;

@optional

@end

#endif /* PTVSharedDeviceMotionObserver_Protocol_h */
