//
#ifndef _TtC7XSports22SportsHeroBackdropView_h
#define _TtC7XSports22SportsHeroBackdropView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.SportsColor away_AA4hometSg, XSports.SportsHeroRippleView ?, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.SportsColor ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo6UIViewC;

@interface XSports.SportsHeroBackdropView : UIView { // (Swift)
    /* instance variables */
    __C.CAGradientLayer teamGradientLayer;
    __C.UIImageView textureImageView;
    __C.UIView dimView;
    __C.UIView scrimView;
    __C.CAGradientLayer scrimMaskLayer;
    XSports.SportsHeroRippleView ? rippleView;
    Swift.Bool isRichStyleEnabled;
    Swift.Bool isMetalRippleEnabled;
    Swift.Bool isMetalActive;
    Swift.Bool isMetalRippleSuspended;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? rippleCompileTask;
    XSports.SportsColor away_AA4hometSg teamColors;
    Swift.Array -> XSports.SportsColor ? diagonalColors;
    nominal type descriptor for CoreGraphics.CGFloat diagonalHeight;
}

@property (nonatomic) _Bool hidden;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)isHidden;
- (void)rippleEnvironmentDidChange;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports22SportsHeroBackdropView_h */
