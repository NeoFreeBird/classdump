//
#ifndef _TtC14T1TwitterSwift26PullToDismissIndicatorView_h
#define _TtC14T1TwitterSwift26PullToDismissIndicatorView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC;

@interface T1TwitterSwift.PullToDismissIndicatorView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat progress;
    Swift.Bool didAnimateFilled;
    __C.CAShapeLayer fillLayer;
    __C.CAShapeLayer trackLayer;
    __C.CAShapeLayer progressLayer;
    __C.UIImageView arrowImageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC14T1TwitterSwift26PullToDismissIndicatorView_h */
