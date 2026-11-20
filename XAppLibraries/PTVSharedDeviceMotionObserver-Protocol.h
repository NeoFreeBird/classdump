//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
