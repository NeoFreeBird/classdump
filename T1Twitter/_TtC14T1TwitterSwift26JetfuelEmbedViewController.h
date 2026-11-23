//
#ifndef _TtC14T1TwitterSwift26JetfuelEmbedViewController_h
#define _TtC14T1TwitterSwift26JetfuelEmbedViewController_h
@import Foundation;

@class T1TwitterSwift.EmbedSizing, T1TwitterSwift.JetfuelViewController, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$s8XJetfuel16PresentationKindOMn ?, _$sSS, _$sySbcSg;

@interface T1TwitterSwift.JetfuelEmbedViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String path;
    T1TwitterSwift.EmbedSizing sizing;
    ((Swift.Bool) -> ())? onReadinessChange;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onHeightChange;
    T1TwitterSwift.JetfuelViewController jetfuelViewController;
    nominal type descriptor for XJetfuel.PresentationKind ? presentation;
    nominal type descriptor for XJetfuel.PresentationKind ? persistedPresentation;
    nominal type descriptor for CoreGraphics.CGFloat measuredHeight;
    nominal type descriptor for CoreGraphics.CGFloat measuredIntrinsicWidth;
    nominal type descriptor for CoreGraphics.CGFloat measuredWidth;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift26JetfuelEmbedViewController_h */
