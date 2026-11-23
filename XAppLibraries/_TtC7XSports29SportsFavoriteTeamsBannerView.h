//
#ifndef _TtC7XSports29SportsFavoriteTeamsBannerView_h
#define _TtC7XSports29SportsFavoriteTeamsBannerView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSa -> XSports.SportsFavoriteTeam, _$sSa -> XSports.SportsTeamLogoTileView, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface XSports.SportsFavoriteTeamsBannerView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onSelect;
    (() -> ())? onDismiss;
    __C.UIButton contentButton;
    __C.UIButton closeButton;
    __C.UILabel titleLabel;
    __C.UILabel messageLabel;
    Swift.Array -> XSports.SportsTeamLogoTileView teamViews;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Array -> XSports.SportsFavoriteTeam teams;
}

/* instance methods */
- (void)refreshFonts;
- (void)selectTeams;
- (void)dismissBanner;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports29SportsFavoriteTeamsBannerView_h */
