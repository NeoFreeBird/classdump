//
#ifndef CAAnimationDelegate_Protocol_h
#define CAAnimationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CAAnimationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)animationDidStart:(id)start;
- (void)animationDidStop:(id)stop finished:(_Bool)finished;

@end

#endif /* CAAnimationDelegate_Protocol_h */
