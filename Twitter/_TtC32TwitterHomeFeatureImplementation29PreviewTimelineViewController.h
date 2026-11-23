//
#ifndef _TtC32TwitterHomeFeatureImplementation29PreviewTimelineViewController_h
#define _TtC32TwitterHomeFeatureImplementation29PreviewTimelineViewController_h
@import Foundation;

@class Swift.Bool, TwitterHomeFeatureImplementation.PreviewTimelineViewController.CTAConfiguration, TwitterHomeFeatureImplementation.ScrollOnlyOverlayView, UIViewController, _$s10Foundation21NSKeyValueObservationCMn ?, _$s10Foundation4DateVMn ?, _$sSS, _$sSSSg, _$sSo16UIViewControllerC, _$sSo6UIViewC, _$sSo9TFNButtonCSg, _$sySicSg, _$syycSg;

@interface TwitterHomeFeatureImplementation.PreviewTimelineViewController : UIViewController { // (Swift)
    /* instance variables */
    (() -> ())? onShow;
    ((Swift.Int) -> ())? onCTATapped;
    ((Swift.Int) -> ())? onDismiss;
    Swift.String timelineTitle;
    Swift.String? iconName;
    TwitterHomeFeatureImplementation.PreviewTimelineViewController.CTAConfiguration ctaConfig;
    __C.UIViewController timelineViewController;
    TwitterHomeFeatureImplementation.ScrollOnlyOverlayView scrollOnlyOverlay;
    __C.UIView navBarSeparator;
    Swift.Bool usesLiquidGlass;
    __C.TFNButton? ctaButton;
    nominal type descriptor for Foundation.NSKeyValueObservation ? scrollObservation;
    nominal type descriptor for Foundation.Date ? showTime;
    Swift.Bool didTapCTA;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)closeButtonTapped;
- (void)ctaButtonTouchDown;
- (void)ctaButtonTouchUp;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation29PreviewTimelineViewController_h */
