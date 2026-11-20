//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
