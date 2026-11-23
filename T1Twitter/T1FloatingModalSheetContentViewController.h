//
#ifndef T1FloatingModalSheetContentViewController_h
#define T1FloatingModalSheetContentViewController_h
@import Foundation;

#include "TFNModalSheetViewControllerDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNPresentationInterceptor-Protocol.h"

@class UIScrollView, UIViewController;

@interface T1FloatingModalSheetContentViewController : UIViewController <TFNPresentationInterceptor, TFNModalSheetViewControllerLayoutDelegate, TFNModalSheetViewControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *stack;
    NSNumber"16@0:8 *contentType;
    NSNumber"16@0:8 *fullScreenTriggerIdentifiers;
    NSNumber"16@0:8 *prefersStickyFullScreen;
    NSNumber"16@0:8 *glassFullScreenToggleItem;
    NSNumber"16@0:8 *stackWillShowSubscription;
}

@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property (nonatomic) _Bool tfn_sendContentScrollEventsToParentViewController;

/* class methods */
+ (id)modalSheetWithRootViewController:(id)controller contentType:(long long)type;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (id)navigationMetadataViewController;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (_Bool)modalSheetViewControllerShouldDismissWithGesture:(id)gesture;
- (void)modalSheetViewController:(id)controller willTransitionToLayoutMode:(long long)mode withTransitionCoordinator:(id)coordinator;
- (void)objcFullScreenToggleTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1FloatingModalSheetContentViewController_h */
