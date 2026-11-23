//
#ifndef UIViewController_TFNFloatingView_h
#define UIViewController_TFNFloatingView_h
@import Foundation;

#include "TFNTouchDownGestureRecognizer.h"
#include "TPXAnimationObserver-Protocol.h"
#include "TPXDecayAnimator.h"
#include "TPXSpringAnimator.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSSet, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol TFNFloatingViewDelegate;

@interface UIViewController (TFNFloatingView)

/* instance methods */
- (id)tfn_floatingViewForLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* UIViewController_TFNFloatingView_h */
