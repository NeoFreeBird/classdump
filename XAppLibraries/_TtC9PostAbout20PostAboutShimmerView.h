//
#ifndef _TtC9PostAbout20PostAboutShimmerView_h
#define _TtC9PostAbout20PostAboutShimmerView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSi, _$sSo15CAGradientLayerC, _$sSo6UIFontC;

@interface PostAbout.PostAboutShimmerView : UIView { // (Swift)
    /* instance variables */
    __C.UIFont font;
    Swift.Int lineCount;
    nominal type descriptor for CoreGraphics.CGFloat lastLineWidthRatio;
    __C.CAGradientLayer gradientLayer;
    [__C.UIView] bars;
    nominal type descriptor for CoreGraphics.CGFloat animatedWidth;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9PostAbout20PostAboutShimmerView_h */
