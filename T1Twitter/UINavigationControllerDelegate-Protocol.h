//
#ifndef UINavigationControllerDelegate_Protocol_h
#define UINavigationControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UINavigationControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(_Bool)animated;
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(_Bool)animated;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(_Bool)animated;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(_Bool)animated;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;

@end

#endif /* UINavigationControllerDelegate_Protocol_h */
