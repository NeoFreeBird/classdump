//
#ifndef _TtC7XSports15MLBGameHeroView_h
#define _TtC7XSports15MLBGameHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.BaseballDiamondView, XSports.BaseballHitFieldView, XSports.MLBGameHeroLiveView, XSports.MLBGameHeroView.LayoutMetrics ?, XSports.MLBGameHeroView.Rendering, XSports.MLBGameHeroView.ResolvedCenter ?, XSports.MLBHeroDirector, XSports.MLBHeroScene, XSports.SportsGameHeroTeamColumn, XSports.SportsHeroHighlightsPill ?, _$s10TFNUISwift11ShimmerViewCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, __C.CGSize, __C.UIEdgeInsets;

@interface XSports.MLBGameHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsGameHeroTeamColumn awayColumn;
    XSports.SportsGameHeroTeamColumn homeColumn;
    __C.UILabel clockLabel;
    __C.UILabel detailLabel;
    __C.UILabel seriesLabel;
    __C.CGSize seriesLabelSize;
    XSports.BaseballDiamondView diamondView;
    XSports.BaseballHitFieldView fieldView;
    XSports.MLBGameHeroLiveView liveView;
    __C.UIView skeletonShapes;
    __C.UIView skeletonAwayLogo;
    __C.UIView skeletonHomeLogo;
    __C.UIView skeletonAwayScore;
    __C.UIView skeletonHomeScore;
    __C.UIView skeletonCenterTop;
    __C.UIView skeletonCenterBottom;
    nominal type descriptor for TFNUISwift.ShimmerView ? shimmerView;
    XSports.MLBGameHeroView.Rendering rendering;
    XSports.MLBGameHeroView.ResolvedCenter ? resolvedCenter;
    nominal type descriptor for CoreGraphics.CGFloat minimizeProgress;
    nominal type descriptor for CoreGraphics.CGFloat coverProgress;
    __C.UIEdgeInsets navigationBandInsets;
    XSports.SportsHeroHighlightsPill ? highlights;
    XSports.MLBHeroDirector director;
    XSports.MLBHeroScene scene;
    XSports.MLBGameHeroView.LayoutMetrics ? layoutMetrics;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC7XSports15MLBGameHeroView_h */
