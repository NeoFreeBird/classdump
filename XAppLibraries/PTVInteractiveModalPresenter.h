//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVInteractiveModalPresenter_h
#define PTVInteractiveModalPresenter_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;

@interface PTVInteractiveModalPresenter : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedPresenter;

/* instance methods */
- (void)configureViewController:(id)controller;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForDismissal:(id)dismissal;
- (unsigned long long)animationStyleForPresentedViewController:(id)controller;
- (id)animatorForPresentedViewController:(id)controller isDismissing:(_Bool)dismissing;

@end

#endif /* PTVInteractiveModalPresenter_h */
