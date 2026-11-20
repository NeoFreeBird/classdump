//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsGameViewController_h
#define _TtC7XSports24SportsGameViewController_h
@import Foundation;

#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"

@class Swift.Bool, UIViewController, XSports.SportsColumnsView, XSports.SportsComposeAction ?, XSports.SportsGameChromeView, XSports.SportsGameIntegrating, XSports.SportsGameSegmentTabBarBehavior, XSports.SportsGameSheetPresentation ?, XSports.SportsGameSideColumnView view_ XSports.SportsSegmentPagerViewController XSports.SportsGameSegmentID _$sG5pagertSg ->, XSports.SportsGameView, XSports.SportsSegmentBarView, XSports.SportsSegmentPagerViewController XSports.SportsGameSegmentID ?, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewC, _$syycSg;

@interface XSports.SportsGameViewController : UIViewController <TFNJumpBackToHomeTimelineBehavior> { // (Swift)
    /* instance variables */
    (() -> ())? onUserInterfaceStyleChange;
    Swift.Bool allowsInteractivePop;
    XSports.SportsGameIntegrating integration;
    XSports.SportsGameView gameView;
    XSports.SportsSegmentBarView segmentBarView;
    XSports.SportsSegmentPagerViewController XSports.SportsGameSegmentID ? $__lazy_storage_$_pager;
    XSports.SportsColumnsView columnsView;
    XSports.SportsGameChromeView navigationChromeView;
    __C.UIView titleViewPlaceholder;
    XSports.SportsGameSideColumnView view_ XSports.SportsSegmentPagerViewController XSports.SportsGameSegmentID _$sG5pagertSg -> sideColumn;
    XSports.SportsGameSheetPresentation ? appliedSheet;
    nominal type descriptor for CoreGraphics.CGFloat appliedNavigationBandInset;
    XSports.SportsComposeAction ? activeSegmentCompose;
    XSports.SportsComposeAction ? sideSegmentCompose;
    XSports.SportsGameSegmentTabBarBehavior activeSegmentTabBarBehavior;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)allowsJumpBackToHomeTimeline;
- (id)initWithCoder:(id)coder;
- (id)scribePage;
- (id)scribeSection;
- (void)traitCollectionDidChange:(id)change;
- (void)loadView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewDidLayoutSubviews;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports24SportsGameViewController_h */
