//
#ifndef _TtC14T1TwitterSwift28XDSTrayContentViewController_h
#define _TtC14T1TwitterSwift28XDSTrayContentViewController_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.JetfuelElementHostView, T1TwitterSwift.LayoutRelay, T1TwitterSwift.PendingPush ?, T1TwitterSwift.XDSTrayChrome, T1TwitterSwift.XDSTrayChrome.FooterSlot ?, T1TwitterSwift.XDSTrayChrome.FooterSlot slot_Sd4timetSg, _$s10Foundation21NSKeyValueObservationCMn ?, _$s10JetfuelSDK13RenderingDepsVMn, _$s10JetfuelSDK5DomVCCMn, _$s13XDesignSystem10TraySizingVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$syycSg;

@interface T1TwitterSwift.XDSTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onDismiss;
    nominal type descriptor for JetfuelSDK.RenderingDeps deps;
    nominal type descriptor for XDesignSystem.TraySizing sizing;
    Swift.Bool isPushed;
    T1TwitterSwift.XDSTrayChrome chrome;
    nominal type descriptor for JetfuelSDK.DomVC domViewController;
    T1TwitterSwift.JetfuelElementHostView hostView;
    T1TwitterSwift.LayoutRelay layoutRelay;
    Swift.Bool didNotifyDismiss;
    Swift.Bool isChromeReloadScheduled;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentBoundsObservation;
    T1TwitterSwift.XDSTrayChrome.FooterSlot slot_Sd4timetSg lastFooterPress;
    T1TwitterSwift.XDSTrayChrome.FooterSlot ? loadingFooterSlot;
    T1TwitterSwift.PendingPush ? pendingPush;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift28XDSTrayContentViewController_h */
