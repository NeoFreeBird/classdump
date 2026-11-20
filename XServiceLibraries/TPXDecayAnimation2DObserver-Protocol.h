//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPXDecayAnimation2DObserver_Protocol_h
#define TPXDecayAnimation2DObserver_Protocol_h
@import Foundation;

#include "TPXAnimationObserver-Protocol.h"

@protocol TPXDecayAnimation2DObserver <TPXAnimationObserver>

@required

@optional

/* optional instance methods */
- (void)tpx_decayAnimationXAxisStabilized:(id)stabilized;
- (void)tpx_decayAnimationYAxisStabilized:(id)stabilized;

@end

#endif /* TPXDecayAnimation2DObserver_Protocol_h */
