//
#ifndef _TtC7XSports39AmericanFootballImpactPlayAnimationView_h
#define _TtC7XSports39AmericanFootballImpactPlayAnimationView_h
@import Foundation;

@class UIView, XSports.AmericanFootballImpactConfettiView ?, XSports.AmericanFootballImpactLogoView, XSports.AmericanFootballImpactPlayAnimation.Style ?, XSports.SportsImpactWordmarkView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.AmericanFootballImpactPlayAnimation.Beat _$s_ XSports.AmericanFootballImpactTeamAppearance _$st, _$sSd, _$sSo13CADisplayLinkCSg, _$sySbcSg;

@interface XSports.AmericanFootballImpactPlayAnimationView : UIView { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onActiveChange;
    XSports.AmericanFootballImpactLogoView logoView;
    XSports.SportsImpactWordmarkView wordmarkView;
    XSports.AmericanFootballImpactConfettiView ? confettiView;
    __C.CADisplayLink? displayLink;
    Swift.Double startTime;
    nominal type descriptor for CoreGraphics.CGFloat endFrame;
    XSports.AmericanFootballImpactPlayAnimation.Style ? activeStyle;
    Swift.Array -> XSports.AmericanFootballImpactPlayAnimation.Beat  first-element-marker  XSports.AmericanFootballImpactTeamAppearance _$st pendingBeats;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)step;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports39AmericanFootballImpactPlayAnimationView_h */
