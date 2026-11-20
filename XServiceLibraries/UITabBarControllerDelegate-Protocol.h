//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITabBarControllerDelegate_Protocol_h
#define UITabBarControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITabBarControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)tabBarController:(id)controller shouldSelectTab:(id)tab;
- (void)tabBarController:(id)controller didSelectTab:(id)tab previousTab:(id)tab;
- (unsigned long long)tabBarController:(id)controller tab:(id)tab operationForAcceptingItemsFromDropSession:(id)session;
- (unsigned long long)tabBarController:(id)controller tab:(id)tab operationForAcceptingItemsFromDropSession:(id)session;
- (void)tabBarController:(id)controller tab:(id)tab acceptItemsFromDropSession:(id)session;
- (void)tabBarController:(id)controller tab:(id)tab acceptItemsFromDropSession:(id)session;
- (void)tabBarControllerWillBeginEditing:(id)editing;
- (void)tabBarControllerDidEndEditing:(id)editing;
- (void)tabBarController:(id)controller visibilityDidChangeForTabs:(id)tabs;
- (void)tabBarController:(id)controller visibilityDidChangeForTabs:(id)tabs;
- (void)tabBarController:(id)controller displayOrderDidChangeForGroup:(id)group;
- (void)tabBarController:(id)controller displayOrderDidChangeForGroup:(id)group;
- (id)tabBarController:(id)controller displayedViewControllersForTab:(id)tab proposedViewControllers:(id)controllers;
- (id)tabBarController:(id)controller displayedViewControllersForTab:(id)tab proposedViewControllers:(id)controllers;
- (_Bool)tabBarController:(id)controller shouldSelectViewController:(id)controller;
- (_Bool)tabBarController:(id)controller shouldSelectViewController:(id)controller;
- (void)tabBarController:(id)controller didSelectViewController:(id)controller;
- (void)tabBarController:(id)controller didSelectViewController:(id)controller;
- (void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
- (void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
- (void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(_Bool)changed;
- (void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(_Bool)changed;
- (void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(_Bool)changed;
- (void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(_Bool)changed;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (id)tabBarController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)tabBarController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)tabBarController:(id)controller animationControllerForTransitionFromViewController:(id)controller toViewController:(id)controller;
- (id)tabBarController:(id)controller animationControllerForTransitionFromViewController:(id)controller toViewController:(id)controller;

@end

#endif /* UITabBarControllerDelegate_Protocol_h */
