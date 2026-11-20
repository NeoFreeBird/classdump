//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections25ElectionsDecisionDeskView_h
#define _TtC10XElections25ElectionsDecisionDeskView_h
@import Foundation;

@class UIView, XElections.ElectionsDecisionDesk ?, XElections.ElectionsImageLoader ?, _$s12CoreGraphics7CGFloatVMn, _$sS2Sc, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, _$syycSg;

@interface XElections.ElectionsDecisionDeskView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel leadingLabel;
    __C.UILabel trailingLabel;
    __C.UIImageView logoView;
    XElections.ElectionsImageLoader ? $__lazy_storage_$_logoLoader;
    nominal type descriptor for CoreGraphics.CGFloat logoHeight;
    (Swift.String) -> Swift.String accessibilityText;
    XElections.ElectionsDecisionDesk ? decisionDesk;
    __C.TIPImagePipeline? imagePipeline;
    (() -> ())? onTap;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XElections25ElectionsDecisionDeskView_h */
