//
#ifndef _TtC10TwitterURT40URTOCFHalfCoverTrayContentViewController_h
#define _TtC10TwitterURT40URTOCFHalfCoverTrayContentViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$sSa -> TwitterURT.URTOCFHalfCoverTrayContentViewController.Action, _$sSo23TFNPromptViewControllerC, _$sySicSg;

@interface TwitterURT.URTOCFHalfCoverTrayContentViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterURT.URTOCFHalfCoverTrayContentViewController.Action actions;
    ((Swift.Int) -> ())? onAction;
    __C.TFNPromptViewController promptViewController;
    Swift.Bool isMeasuringHeight;
    nominal type descriptor for CoreGraphics.CGFloat inFlightHeight;
    Swift.Bool hasFinishedPresenting;
    Swift.Bool needsHeightUpdate;
    Swift.Bool didDisableBounce;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10TwitterURT40URTOCFHalfCoverTrayContentViewController_h */
