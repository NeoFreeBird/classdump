//
#ifndef _TtC9GlassDock14DockPlayerView_h
#define _TtC9GlassDock14DockPlayerView_h
@import Foundation;

@class GlassDock.DockCapsuleAccessibilityElement, GlassDock.DockCapsuleInteraction ?, GlassDock.DockFeaturedCard, GlassDock.DockGlassPlatter, GlassDock.DockMediumContent, GlassDock.DockPlayerAppearance, GlassDock.DockPlayerLayout.Frames ?, GlassDock.DockPlayerMetrics, GlassDock.DockPlayerState, GlassDock.DockPlayerState.Size, GlassDock.DockPlayerViewDelegate ?, GlassDock.DockPreviewStyle, GlassDock.DockProgressIndicatorView ?, GlassDock.DockProgressStyle ?, GlassDock.DockSmallOverlayStyle, GlassDock.DockTileRing ?, GlassDock.DockTileShape, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSDySS GlassDock.DockGlyphButton, _$sSS, _$sSSSg, _$sSa -> GlassDock.DockControl, _$sShySSG, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7UIColorC, _$sSo7UILabelC;

@interface GlassDock.DockPlayerView : UIView { // (Swift)
    /* instance variables */
    GlassDock.DockPlayerViewDelegate ? delegate;
    GlassDock.DockPlayerMetrics metrics;
    GlassDock.DockPlayerAppearance appearance;
    __C.UIView previewContainerView;
    GlassDock.DockPlayerState state;
    Swift.String title;
    Swift.String subtitle;
    Swift.String? subtitleAccessibilityLabel;
    __C.UIView? subtitleAccessoryView;
    __C.UIView? subtitleLeadingAccessoryView;
    __C.UIView? secondaryPreview;
    Swift.Bool showsLiveDot;
    Swift.Bool collapsesSubtitleAccessoryToDot;
    __C.UIColor liveDotColor;
    nominal type descriptor for CoreGraphics.CGFloat videoAspectRatio;
    GlassDock.DockTileShape tileShape;
    GlassDock.DockPreviewStyle previewStyle;
    GlassDock.DockMediumContent mediumContent;
    Swift.Bool isDismissEnabled;
    Swift.Bool isSwipeOffEnabled;
    GlassDock.DockTileRing ? tileRing;
    GlassDock.DockProgressStyle ? progressStyle;
    GlassDock.DockSmallOverlayStyle smallOverlayStyle;
    __C.UIView preview;
    GlassDock.DockGlassPlatter platter;
    __C.UIView secondaryPreviewContainerView;
    __C.UIView previewClipView;
    __C.UIView previewScrimView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIImageView smallGlyphView;
    __C.UIView liveDotView;
    GlassDock.DockCapsuleAccessibilityElement capsuleElement;
    GlassDock.DockFeaturedCard featuredCard;
    Swift.Array -> GlassDock.DockControl controlsStorage;
    Swift.Dictionary empty-list Swift.String GlassDock.DockGlyphButton controlButtons;
    Swift.Set<Swift.String> hiddenControlIDs;
    Swift.Bool playingState;
    nominal type descriptor for CoreGraphics.CGFloat ? progressValue;
    Swift.Bool isPreviewHidden;
    GlassDock.DockProgressIndicatorView ? trackIndicator;
    GlassDock.DockProgressIndicatorView ? smallRingIndicator;
    GlassDock.DockPlayerLayout.Frames ? lastFrames;
    GlassDock.DockCapsuleInteraction ? interaction;
    GlassDock.DockPlayerState.Size size;
}

/* instance methods */
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)coder;
- (void)handleControlTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock14DockPlayerView_h */
