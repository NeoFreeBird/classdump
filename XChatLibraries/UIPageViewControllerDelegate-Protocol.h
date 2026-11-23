//
#ifndef UIPageViewControllerDelegate_Protocol_h
#define UIPageViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPageViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pageViewController:(id)controller willTransitionToViewControllers:(id)controllers;
- (void)pageViewController:(id)controller willTransitionToViewControllers:(id)controllers;
- (void)pageViewController:(id)controller didFinishAnimating:(_Bool)animating previousViewControllers:(id)controllers transitionCompleted:(_Bool)completed;
- (long long)pageViewController:(id)controller spineLocationForInterfaceOrientation:(long long)orientation;
- (long long)pageViewController:(id)controller spineLocationForInterfaceOrientation:(long long)orientation;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(id)presentation;

@end

#endif /* UIPageViewControllerDelegate_Protocol_h */
