//
#ifndef _TtC14T1TwitterSwift32JetfuelTrayContentViewController_h
#define _TtC14T1TwitterSwift32JetfuelTrayContentViewController_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.JetfuelViewController, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSo12UIScrollViewC, _$sSo16UIViewControllerCSgXw, _$syycSg;

@interface T1TwitterSwift.JetfuelTrayContentViewController : UIViewController { // (Swift)
    /* instance variables */
    T1TwitterSwift.JetfuelViewController jetfuelViewController;
    nominal type descriptor for CoreGraphics.CGFloat lastMeasuredHeight;
    nominal type descriptor for CoreGraphics.CGFloat measurementWidth;
    Swift.Bool isPanning;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? pendingTray;
    weak __C.UIViewController? pendingHost;
    (() -> ())? pendingCompletion;
    Swift.Bool keepsHeightWhenContentGrows;
    nominal type descriptor for CoreGraphics.CGFloat ? presentedHeight;
    Swift.Bool scrollsOnRequest;
    __C.UIScrollView scrollView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift32JetfuelTrayContentViewController_h */
