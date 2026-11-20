//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNNavigationStack_Protocol_h
#define TFNNavigationStack_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol TFNNavigationStack <NSObject>

@required

@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, readonly) UIViewController *visibleViewController;
@property (nonatomic, readonly) id <UIViewControllerTransitionCoordinator> transitionCoordinator;

/* required instance methods */
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* TFNNavigationStack_Protocol_h */
