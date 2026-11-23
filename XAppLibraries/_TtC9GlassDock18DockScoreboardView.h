//
#ifndef _TtC9GlassDock18DockScoreboardView_h
#define _TtC9GlassDock18DockScoreboardView_h
@import Foundation;

@class GlassDock.DockCapsuleAccessibilityElement, GlassDock.DockCapsuleInteraction ?, GlassDock.DockFeaturedCard, GlassDock.DockGlassPlatter, GlassDock.DockGlyphButton, GlassDock.DockPlayerState, GlassDock.DockPlayerState.Size, GlassDock.DockScoreboardAppearance, GlassDock.DockScoreboardGeometry ?, GlassDock.DockScoreboardMetrics, GlassDock.DockScoreboardState, GlassDock.DockScoreboardViewDelegate ?, GlassDock.DockScoreboardWashView, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface GlassDock.DockScoreboardView : UIView { // (Swift)
    /* instance variables */
    GlassDock.DockScoreboardViewDelegate ? delegate;
    GlassDock.DockScoreboardMetrics metrics;
    GlassDock.DockScoreboardAppearance appearance;
    GlassDock.DockPlayerState state;
    GlassDock.DockScoreboardState scoreboard;
    GlassDock.DockPlayerState.Size size;
    nominal type descriptor for CoreGraphics.CGFloat logoAlpha;
    Swift.String? capsuleAccessibilityLabel;
    Swift.Bool showsCloseButton;
    Swift.Bool isDismissEnabled;
    GlassDock.DockGlassPlatter platter;
    GlassDock.DockScoreboardWashView washView;
    __C.UIImageView awayLogoView;
    __C.UIImageView homeLogoView;
    __C.UILabel awayScoreLabel;
    __C.UILabel homeScoreLabel;
    __C.UILabel clockLabel;
    __C.UILabel situationLabel;
    __C.UILabel viewersLabel;
    __C.UIImageView possessionView;
    GlassDock.DockGlyphButton closeButton;
    GlassDock.DockCapsuleAccessibilityElement capsuleElement;
    GlassDock.DockFeaturedCard featuredCard;
    GlassDock.DockCapsuleInteraction ? interaction;
    GlassDock.DockScoreboardGeometry ? morphSource;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)handleClose;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock18DockScoreboardView_h */
