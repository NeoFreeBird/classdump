//
#ifndef _TtC13XDesignSystem28TrayNavigationViewController_h
#define _TtC13XDesignSystem28TrayNavigationViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XDesignSystem.TrayInterruptibleTransition, XDesignSystem.TrayNavigationView ?, XDesignSystem.TrayScrollEdgeTreatment, _$sSDySO _$s12CoreGraphics7CGFloatVMn, _$sSa -> XDesignSystem.TrayContentViewController, _$sSayyycG, _$syycSg;

@interface XDesignSystem.TrayNavigationViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Array -> XDesignSystem.TrayContentViewController contentStack;
    XDesignSystem.TrayNavigationView ? navigationView;
    XDesignSystem.TrayScrollEdgeTreatment scrollEdgeTreatment;
    XDesignSystem.TrayInterruptibleTransition footerPresenceTransition;
    (() -> ())? footerRideRelease;
    Swift.Bool isAnimatingScreenTransition;
    [() -> ()] pendingScreenTransitionWork;
    Swift.Dictionary empty-list Swift.ObjectIdentifier nominal type descriptor for CoreGraphics.CGFloat swipeUpExpansionScreenHeights;
}

@property (nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;

/* instance methods */
- (void)loadView;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem28TrayNavigationViewController_h */
