//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModalSheetViewController_h
#define PTVModalSheetViewController_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIColor, UIView, UIViewController;

@interface PTVModalSheetViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *handleView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) long long presentationState;
@property (nonatomic) _Bool isExpandable;
@property (nonatomic) _Bool isDismissableWithGesture;
@property (retain, nonatomic) UIColor *handleColor;
@property (retain, nonatomic) UIColor *sheetColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentViewController:(id)controller;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updatePreferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)transitionModalSheetToFullHeight;
- (void)transitionModalSheetToPreferredHeight;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)animatorForPresentedViewController:(id)controller isDismissing:(_Bool)dismissing;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* PTVModalSheetViewController_h */
