//
#ifndef _TtC4Grok25ToolResultChipsScrollView_h
#define _TtC4Grok25ToolResultChipsScrollView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> Grok.ToolResultChipsScrollView.ChipView, _$sSaySSG, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC;

@interface Grok.ToolResultChipsScrollView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat leadingInset;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIScrollView scrollView;
    __C.UIView chipsContainer;
    __C.CAGradientLayer gradientLayer;
    __C.UIView fadeMaskView;
    Swift.Array -> Grok.ToolResultChipsScrollView.ChipView chipViews;
    Swift.Bool hasSetChips;
    [Swift.String] chipsIdentity;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok25ToolResultChipsScrollView_h */
