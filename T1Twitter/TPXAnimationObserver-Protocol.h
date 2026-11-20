//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPXAnimationObserver_Protocol_h
#define TPXAnimationObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TPXAnimationObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)tpx_animationDidStart:(id)start;
- (void)tpx_animationDidUpdate:(id)update;
- (void)tpx_animationDidStop:(id)stop;

@end

#endif /* TPXAnimationObserver_Protocol_h */
