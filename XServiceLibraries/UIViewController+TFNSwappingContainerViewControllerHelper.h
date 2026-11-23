//
#ifndef UIViewController_TFNSwappingContainerViewControllerHelper_h
#define UIViewController_TFNSwappingContainerViewControllerHelper_h
@import Foundation;

#include "UIViewControllerTransitionCoordinator-Protocol.h"

@class NSObject, UIViewController, UIViewPropertyAnimator;
@protocol TFNSwappingContainerViewControllerHelperDelegate;

@interface UIViewController (TFNSwappingContainerViewControllerHelper)

/* instance methods */
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)coordinator;

@end

#endif /* UIViewController_TFNSwappingContainerViewControllerHelper_h */
