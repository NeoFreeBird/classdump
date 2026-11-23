//
#ifndef TFNViewControllerEventObserver_Protocol_h
#define TFNViewControllerEventObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNViewControllerEventObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)viewControllerViewDidLoad:(id)load;
- (void)viewControllerViewWillFullyAppear:(id)appear;
- (void)viewControllerViewDidFullyAppear:(id)appear;
- (void)viewControllerViewWillFullyDisappear:(id)disappear;
- (void)viewControllerViewDidFullyDisappear:(id)disappear;
- (void)viewControllerApplicationDidBecomeActive:(id)active;
- (void)viewControllerApplicationWillResignActive:(id)active;
- (void)viewControllerPreviewingStateDidChange:(id)change;
- (void)viewController:(id)controller willRotateToInterfaceOrientation:(long long)orientation;
- (void)viewController:(id)controller willRotateToInterfaceOrientation:(long long)orientation;
- (void)viewControllerSafeAreaInsetsDidChange:(id)change;
- (void)viewControllerDidTakeScreenshot:(id)screenshot;

@end

#endif /* TFNViewControllerEventObserver_Protocol_h */
