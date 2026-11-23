//
#ifndef _TtC11XNavigation20ChromeBackgroundView_h
#define _TtC11XNavigation20ChromeBackgroundView_h
@import Foundation;

@class UIView, XNavigation.ChromeBackgroundView.AppliedPaint ?, _$s12CoreGraphics7CGFloatVMn, _$sSbSg, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC;

@interface XNavigation.ChromeBackgroundView : UIView { // (Swift)
    /* instance variables */
    XNavigation.ChromeBackgroundView.AppliedPaint ? appliedPaint;
    Swift.Bool? isContentScrolled;
    __C.NSLayoutConstraint? $__lazy_storage_$_heightConstraint;
    __C.UIView separatorView;
    nominal type descriptor for CoreGraphics.CGFloat extent;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11XNavigation20ChromeBackgroundView_h */
