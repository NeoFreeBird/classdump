//
#ifndef _TtC19TwitterSelfServeAds18BoostBudgetRowView_h
#define _TtC19TwitterSelfServeAds18BoostBudgetRowView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIFontC, _$sSo7UILabelC;

@interface TwitterSelfServeAds.BoostBudgetRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel leadingLabel;
    __C.UILabel trailingLabel;
    __C.UIFont priceFont;
    __C.UIFont reachFont;
    nominal type descriptor for CoreGraphics.CGFloat priceMinimumScaleFactor;
    nominal type descriptor for CoreGraphics.CGFloat horizontalInset;
    nominal type descriptor for CoreGraphics.CGFloat interItemSpacing;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19TwitterSelfServeAds18BoostBudgetRowView_h */
