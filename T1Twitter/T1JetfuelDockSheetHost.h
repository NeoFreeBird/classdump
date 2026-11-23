//
#ifndef T1JetfuelDockSheetHost_h
#define T1JetfuelDockSheetHost_h
@import Foundation;

@class TFNViewController;

@interface T1JetfuelDockSheetHost : TFNViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *state;
    NSNumber"16@0:8 *collapsedPath;
    NSNumber"16@0:8 *expandedPath;
    NSNumber"16@0:8 *jetfuelVC;
    NSNumber"16@0:8 *navController;
    NSNumber"16@0:8 *container;
    NSNumber"16@0:8 *height;
    NSNumber"16@0:8 *cardHeightConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_backgroundBlurView;
    NSNumber"16@0:8 *$__lazy_storage_$_cardView;
    NSNumber"16@0:8 *insetConstraints;
    NSNumber"16@0:8 *$__lazy_storage_$_chromeContainer;
    NSNumber"16@0:8 *$__lazy_storage_$_closeButton;
    NSNumber"16@0:8 *$__lazy_storage_$_chevronButton;
    NSNumber"16@0:8 *$__lazy_storage_$_unfollowBtn;
    NSNumber"16@0:8 *tapRecognizer;
    NSNumber"16@0:8 *panGestureRecognizer;
    NSNumber"16@0:8 *collapsedHeight;
    NSNumber"16@0:8 *jetfuelTopConstraint;
    NSNumber"16@0:8 *jetfuelTrailingConstraint;
    NSNumber"16@0:8 *jetfuelLeadingConstraint;
    NSNumber"16@0:8 *jetfuelBottomConstraint;
    NSNumber"16@0:8 *chromeHeightConstraint;
    NSNumber"16@0:8 *didAnimateEntrance;
}

/* class methods */
+ (void)dockWithPath:(id)path collapsed:(id)collapsed account:(id)account;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLoad;
- (void)handlePanGesture:(id)gesture;
- (void)handleTapToExpand;
- (void)closeTapped;
- (void)chevronTapped;
- (void)unfollowTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1JetfuelDockSheetHost_h */
