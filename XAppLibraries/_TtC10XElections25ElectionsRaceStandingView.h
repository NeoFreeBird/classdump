//
#ifndef _TtC10XElections25ElectionsRaceStandingView_h
#define _TtC10XElections25ElectionsRaceStandingView_h
@import Foundation;

@class UIView, XElections.ElectionsSeatStyle, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XElections.ElectionsRaceStandingView : UIView { // (Swift)
    /* instance variables */
    __C.UIView chipView;
    __C.UILabel ratingLabel;
    __C.UILabel probabilityLabel;
    XElections.ElectionsSeatStyle style;
    (() -> ())? onTap;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)didTap;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC10XElections25ElectionsRaceStandingView_h */
