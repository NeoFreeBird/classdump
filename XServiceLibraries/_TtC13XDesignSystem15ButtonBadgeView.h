//
#ifndef _TtC13XDesignSystem15ButtonBadgeView_h
#define _TtC13XDesignSystem15ButtonBadgeView_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.Button.Badge, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo12CAShapeLayerC, _$sSo6UIViewC, _$sSo7UILabelCSg;

@interface XDesignSystem.ButtonBadgeView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.Button.Badge badge;
    __C.UIView dotView;
    __C.CAShapeLayer ringLayer;
    __C.UILabel? capsuleLabel;
    Swift.Bool hasStartedOnce;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable pingCancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem15ButtonBadgeView_h */
