//
#ifndef _TtC7XSports25FormulaRacingRaceCardView_h
#define _TtC7XSports25FormulaRacingRaceCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsDashedSeparator, XSports.SportsLivePulseDotView, XSports.SportsScorecard ?, _$s13XDesignSystem6ButtonCMn, _$sSa -> XSports.AthleteRowView, _$sSaySo7UILabelC5value_AB5labeltG, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.FormulaRacingRaceCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIImageView flagView;
    __C.UILabel nameLabel;
    __C.UILabel circuitLabel;
    XSports.SportsLivePulseDotView statusDot;
    __C.UILabel statusLabel;
    __C.UIView detailsBox;
    [(value: __C.UILabel, label: __C.UILabel)] detailLabels;
    __C.UIView leadersBox;
    __C.UILabel leadersTitleLabel;
    Swift.Array -> XSports.AthleteRowView leaderRows;
    XSports.SportsDashedSeparator footerDivider;
    __C.UIImageView chatWave;
    __C.UILabel chattingNowLabel;
    nominal type descriptor for XDesignSystem.Button joinChatButton;
    XSports.SportsScorecard ? scorecard;
    (() -> ())? onJoinChat;
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapJoinChat;

@end

#endif /* _TtC7XSports25FormulaRacingRaceCardView_h */
