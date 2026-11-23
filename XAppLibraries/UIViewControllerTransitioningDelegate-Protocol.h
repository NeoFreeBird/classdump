//
#ifndef UIViewControllerTransitioningDelegate_Protocol_h
#define UIViewControllerTransitioningDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIViewControllerTransitioningDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForPresentation:(id)presentation;
- (id)interactionControllerForPresentation:(id)presentation;
- (id)interactionControllerForDismissal:(id)dismissal;
- (id)interactionControllerForDismissal:(id)dismissal;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;

@end

#endif /* UIViewControllerTransitioningDelegate_Protocol_h */
