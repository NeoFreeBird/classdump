//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports19SportsScorecardCell_h
#define _TtC7XSports19SportsScorecardCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsDashedSeparator, XSports.SportsScorecard ?, XSports.SportsScorecard.Team _$scSg ->, XSports.SportsScorecardCell.Measured ?, XSports.SportsScorecardEventBorderView, XSports.TeamRowViews, _$s10TFNUISwift11ShimmerViewCMn ?, _$s13XDesignSystem6ButtonCMn, _$sSaySo7UILabelC5label_AB5valuetG, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsScorecardCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UIView cardView;
    XSports.SportsScorecardEventBorderView eventBorderView;
    __C.UIImageView eventLogoView;
    __C.UILabel seriesTitleLabel;
    XSports.TeamRowViews awayRow;
    XSports.TeamRowViews homeRow;
    __C.UIView statusDivider;
    __C.UILabel statusTopLabel;
    __C.UILabel statusBottomLabel;
    nominal type descriptor for XDesignSystem.Button watchButton;
    __C.UIView oddsRow;
    [(label: __C.UILabel, value: __C.UILabel)] oddsPairs;
    __C.UIImageView reminderBell;
    XSports.SportsDashedSeparator footerDivider;
    __C.UIImageView chatWave;
    __C.UILabel chattingNowLabel;
    nominal type descriptor for XDesignSystem.Button joinChatButton;
    nominal type descriptor for XDesignSystem.Button highlightsButton;
    __C.UIView skeletonShapes;
    __C.UIView skeletonAwayLogo;
    __C.UIView skeletonHomeLogo;
    __C.UIView skeletonAwayName;
    __C.UIView skeletonHomeName;
    __C.UIView skeletonAwayValue;
    __C.UIView skeletonHomeValue;
    __C.UIView skeletonStatusTop;
    __C.UIView skeletonStatusBottom;
    XSports.SportsScorecard ? scorecard;
    XSports.SportsScorecardCell.Measured ? measured;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsScorecard.Team _$scSg -> onSelectTeam;
    (() -> ())? onJoinChat;
    (() -> ())? onWatchHighlights;
    (() -> ())? onWatch;
    nominal type descriptor for TFNUISwift.ShimmerView ? skeletonView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapJoinChat;
- (void)didTapHighlights;
- (void)didTapWatch;

@end

#endif /* _TtC7XSports19SportsScorecardCell_h */
