//
#ifndef _TtC14T1TwitterSwift26JetfuelFrameViewController_h
#define _TtC14T1TwitterSwift26JetfuelFrameViewController_h
@import Foundation;

@class T1TwitterSwift.EmbedSizing, T1TwitterSwift.T1JetfuelFrameHostingView, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSo17TFNTwitterAccountC, _$sySbcSg, __C.CGSize;

@interface T1TwitterSwift.JetfuelFrameViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String? path;
    T1TwitterSwift.EmbedSizing sizing;
    ((Swift.Bool) -> ())? onReadinessChange;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onHeightChange;
    Swift.String? payload;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.T1JetfuelFrameHostingView frameView;
    __C.CGSize measuredSize;
    nominal type descriptor for CoreGraphics.CGFloat maxWidth;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)controller;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift26JetfuelFrameViewController_h */
