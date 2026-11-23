//
#ifndef _TtC7XSports22SportsHubSpotlightView_h
#define _TtC7XSports22SportsHubSpotlightView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsHubAdSlot, XSports.SportsHubSpotlight.Actions, XSports.SportsHubSpotlightScribe, XSports.SportsHubSpotlightScribe.Variant, XSports.SportsImageLoader ?, XSports.SportsInlineVideoSession ?, _$s10Foundation3URLVMn ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn cardWidth_ XSports.SportsHubSpotlightView.ExpandedMetrics metricstSg, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9UIControlC;

@interface XSports.SportsHubSpotlightView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.SportsHubAdSlot slot;
    XSports.SportsHubSpotlightScribe.Variant variant;
    XSports.SportsHubSpotlightScribe scribe;
    XSports.SportsHubSpotlight.Actions actions;
    nominal type descriptor for Foundation.URL ? postURL;
    __C.UIView cardView;
    __C.UIView mediaClipView;
    __C.UIView videoContainer;
    __C.UIImageView posterView;
    __C.UIView adBadgeView;
    __C.UILabel adBadgeLabel;
    __C.UIView advertiserBadgeView;
    __C.UILabel advertiserBadgeLabel;
    __C.UIControl primaryControl;
    __C.UIControl creativeCopyControl;
    __C.UIImageView logoView;
    __C.UILabel titleLabel;
    __C.UILabel bannerTitleLabel;
    __C.UILabel subtitleLabel;
    __C.UIImageView chevronView;
    __C.UIControl ctaControl;
    __C.UILabel ctaLabel;
    __C.UIImageView ctaGlyph;
    __C.UIView dividerView;
    __C.UIImageView thumbnailView;
    __C.UIImageView playGlyph;
    XSports.SportsImageLoader ? logoLoader;
    XSports.SportsImageLoader ? posterLoader;
    XSports.SportsInlineVideoSession ? videoSession;
    Swift.Bool isScrollVisible;
    nominal type descriptor for CoreGraphics.CGFloat collapseProgress;
    nominal type descriptor for CoreGraphics.CGFloat cardWidth_ XSports.SportsHubSpotlightView.ExpandedMetrics metricstSg cachedMetrics;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didTapPrimary;
- (void)didTapCreativeCopy;
- (void)didTapCTA;
- (void)didLongPress:(id)press;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports22SportsHubSpotlightView_h */
