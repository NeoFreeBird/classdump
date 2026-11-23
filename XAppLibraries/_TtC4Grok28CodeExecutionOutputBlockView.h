//
#ifndef _TtC4Grok28CodeExecutionOutputBlockView_h
#define _TtC4Grok28CodeExecutionOutputBlockView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo7UILabelC;

@interface Grok.CodeExecutionOutputBlockView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    __C.CAShapeLayer borderLayer;
    nominal type descriptor for CoreGraphics.CGFloat lastLayoutWidth;
    Swift.Bool isError;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC4Grok28CodeExecutionOutputBlockView_h */
