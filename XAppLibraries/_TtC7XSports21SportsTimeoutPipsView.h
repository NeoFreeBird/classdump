//
#ifndef _TtC7XSports21SportsTimeoutPipsView_h
#define _TtC7XSports21SportsTimeoutPipsView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, __C.CGSize;

@interface XSports.SportsTimeoutPipsView : UIView { // (Swift)
    /* instance variables */
    __C.CGSize pipsSize;
    __C.CGSize pipSize;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    [__C.UIView] pips;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports21SportsTimeoutPipsView_h */
