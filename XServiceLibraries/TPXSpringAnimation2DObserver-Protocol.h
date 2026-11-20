//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPXSpringAnimation2DObserver_Protocol_h
#define TPXSpringAnimation2DObserver_Protocol_h
@import Foundation;

#include "TPXAnimationObserver-Protocol.h"

@protocol TPXSpringAnimation2DObserver <TPXAnimationObserver>

@required

@optional

/* optional instance methods */
- (void)tpx_springAnimationXAxisStabilized:(id)stabilized;
- (void)tpx_springAnimationYAxisStabilized:(id)stabilized;

@end

#endif /* TPXSpringAnimation2DObserver_Protocol_h */
