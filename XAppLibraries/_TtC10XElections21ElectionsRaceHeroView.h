//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections21ElectionsRaceHeroView_h
#define _TtC10XElections21ElectionsRaceHeroView_h
@import Foundation;

@class Swift.Bool, UIView, XElections.ElectionsDecisionDeskView, XElections.ElectionsForecastChartView, XElections.ElectionsMapView, XElections.ElectionsRaceHero ?, XElections.ElectionsStatusView, XElections.ElectionsVoteBarView, XElections.ElectionsXAccount _$scSg ->, XElections.ForecastPlaceholderView, XElections.WinnerView, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSa -> XElections.CandidateColumn, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XElections.ElectionsRaceHeroView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XElections.ElectionsXAccount _$scSg -> onOpenProfile;
    (() -> ())? onSelectForecast;
    Swift.Array -> XElections.CandidateColumn columns;
    XElections.WinnerView winnerView;
    __C.UILabel winnerMarginLabel;
    __C.UIView chipView;
    __C.UILabel ratingLabel;
    __C.UILabel probabilityLabel;
    XElections.ElectionsStatusView countingView;
    __C.UILabel statusLabel;
    __C.UILabel updatedLabel;
    XElections.ElectionsVoteBarView voteBar;
    __C.UILabel forecastTitleLabel;
    __C.UILabel marginLabel;
    XElections.ElectionsForecastChartView chartView;
    XElections.ForecastPlaceholderView forecastPlaceholder;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_forecastShimmer;
    XElections.ElectionsDecisionDeskView decisionDeskView;
    __C.UIView standingView;
    XElections.ElectionsMapView mapView;
    Swift.Bool showsMap;
    XElections.ElectionsRaceHero ? hero;
    Swift.Bool revealsCheckOnAppear;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapForecast;

@end

#endif /* _TtC10XElections21ElectionsRaceHeroView_h */
