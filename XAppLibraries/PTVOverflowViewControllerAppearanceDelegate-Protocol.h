//
#ifndef PTVOverflowViewControllerAppearanceDelegate_Protocol_h
#define PTVOverflowViewControllerAppearanceDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVOverflowViewControllerAppearanceDelegate <NSObject>

@required

/* required instance methods */
- (void)overflowViewController:(id)controller willAppearWithAnimationDuration:(double)duration;
- (void)overflowViewController:(id)controller willDisappearWithAnimationDuration:(double)duration;

@optional

/* optional instance methods */
- (_Bool)shouldOverflowViewControllerPresentContentViewFullScreen:(id)screen;

@end

#endif /* PTVOverflowViewControllerAppearanceDelegate_Protocol_h */
