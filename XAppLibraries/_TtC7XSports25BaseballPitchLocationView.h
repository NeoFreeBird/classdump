//
#ifndef _TtC7XSports25BaseballPitchLocationView_h
#define _TtC7XSports25BaseballPitchLocationView_h
@import Foundation;

@class UIView, XSports.SportsStrikeZonePoint ?, _$sSo12CAShapeLayerC, _$sSo6UIViewC;

@interface XSports.BaseballPitchLocationView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer gridLayer;
    __C.UIView dotView;
    XSports.SportsStrikeZonePoint ? point;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports25BaseballPitchLocationView_h */
