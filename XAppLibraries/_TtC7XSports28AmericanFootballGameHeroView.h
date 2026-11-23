//
#ifndef _TtC7XSports28AmericanFootballGameHeroView_h
#define _TtC7XSports28AmericanFootballGameHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.AmericanFootballCompactFieldView, XSports.AmericanFootballFieldView, XSports.AmericanFootballGameHeroView.MorphMetrics ?, XSports.AmericanFootballGameHeroView.ScoreData ?, XSports.AmericanFootballImpactPlayAnimationView, XSports.AmericanFootballLastPlayBarView, XSports.NFLGameHeroReminderBarView, XSports.SportsAnimatedScoreLabel, XSports.SportsHeroHighlightsPill ?, XSports.SportsTeam _$scSg ->, XSports.TeamSideViews, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s12CoreGraphics7CGFloatVMn _$s8logoSize_So6UIFontC4fonttSg, _$sSi, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sySbcSg, __C.UIEdgeInsets;

@interface XSports.AmericanFootballGameHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.AmericanFootballFieldView fieldView;
    XSports.AmericanFootballCompactFieldView compactFieldView;
    XSports.AmericanFootballLastPlayBarView lastPlayBarView;
    XSports.NFLGameHeroReminderBarView reminderBarView;
    XSports.AmericanFootballImpactPlayAnimationView impactOverlay;
    Swift.Bool showsField;
    Swift.Bool showsCompactField;
    XSports.SportsTeam _$scSg -> onSelectTeam;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView scoreboardContainer;
    XSports.TeamSideViews awaySide;
    XSports.TeamSideViews homeSide;
    XSports.SportsAnimatedScoreLabel clockLabel;
    __C.UILabel situationLabel;
    __C.UIImageView possessionImageView;
    __C.UIView possessionBarView;
    XSports.SportsHeroHighlightsPill ? highlights;
    ((Swift.Bool) -> ())? onFieldVisibilityChange;
    nominal type descriptor for CoreGraphics.CGFloat progress;
    nominal type descriptor for CoreGraphics.CGFloat coverProgress;
    nominal type descriptor for CoreGraphics.CGFloat minimizeProgress;
    __C.UIEdgeInsets navigationBandInsets;
    nominal type descriptor for CoreGraphics.CGFloat ? visibleBottom;
    nominal type descriptor for CoreGraphics.CGFloat fieldImageTopY;
    Swift.Bool isFieldVisible;
    XSports.AmericanFootballGameHeroView.ScoreData ? scoreData;
    Swift.Bool isLoading;
    Swift.Bool showsRecords;
    Swift.Bool hasCompactCaption;
    Swift.Int layoutRevision;
    XSports.AmericanFootballGameHeroView.MorphMetrics ? morphMetrics;
    nominal type descriptor for CoreGraphics.CGFloat _$s8logoSize_So6UIFontC4fonttSg badgeFontCache;
    Swift.Bool usesTeamColorBackdrop;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapAwayLogo;
- (void)didTapHomeLogo;
- (void)traitCollectionDidChange:(id)change;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports28AmericanFootballGameHeroView_h */
