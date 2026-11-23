//
#ifndef TFNNavigationStack_Protocol_h
#define TFNNavigationStack_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol TFNNavigationStack <NSObject>

@required

@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (readonly, nonatomic) UIViewController *visibleViewController;
@property (readonly, nonatomic) id <UIViewControllerTransitionCoordinator> transitionCoordinator;

/* required instance methods */
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* TFNNavigationStack_Protocol_h */
