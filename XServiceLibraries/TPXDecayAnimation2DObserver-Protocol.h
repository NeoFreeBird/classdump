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
