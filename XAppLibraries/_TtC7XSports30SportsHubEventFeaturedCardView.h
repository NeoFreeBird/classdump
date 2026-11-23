//
#ifndef _TtC7XSports30SportsHubEventFeaturedCardView_h
#define _TtC7XSports30SportsHubEventFeaturedCardView_h
@import Foundation;

@class UIView, XSports.SportsImageLoader ?, XSports.SportsScorecard, XSports.SportsScorecardCell, XSportsGraphQL.SportsHubEventCardFragment, XSportsGraphQL.SportsHubEventFragment.Branding, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsHubEventFeaturedCardView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onSelect;
    nominal type descriptor for CoreGraphics.CGFloat collapse;
    XSportsGraphQL.SportsHubEventCardFragment card;
    XSportsGraphQL.SportsHubEventFragment.Branding branding;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsScorecard scorecard;
    __C.UIView surfaceView;
    __C.UIView pillBackgroundView;
    XSports.SportsScorecardCell cell;
    __C.UIImageView collapsedLogoView;
    __C.UILabel collapsedLabel;
    XSports.SportsImageLoader ? $__lazy_storage_$_collapsedLogoLoader;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports30SportsHubEventFeaturedCardView_h */
