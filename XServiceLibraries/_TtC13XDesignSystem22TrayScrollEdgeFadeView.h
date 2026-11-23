//
#ifndef _TtC13XDesignSystem22TrayScrollEdgeFadeView_h
#define _TtC13XDesignSystem22TrayScrollEdgeFadeView_h
@import Foundation;

@class UIView, XDesignSystem.TrayScrollEdgeFadeView.Edge, _$sSo15CAGradientLayerC, _$sSo7UIColorC;

@interface XDesignSystem.TrayScrollEdgeFadeView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor surfaceColor;
    XDesignSystem.TrayScrollEdgeFadeView.Edge edge;
    __C.CAGradientLayer gradientLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem22TrayScrollEdgeFadeView_h */
