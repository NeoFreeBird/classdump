//
#ifndef _TtC7XSports15NBAGameHeroView_h
#define _TtC7XSports15NBAGameHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.BasketballCourtView, XSports.BasketballRunView, XSports.BasketballShotClockView, XSports.SportsGameScoreboardView XSports.NBAGameState, XSports.SportsHeroHighlightsPill ?, XSports.SportsLastPlayBarView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSo13CADisplayLinkCSg, _$sSo16TIPImagePipelineCSg, _$sySScSg;

@interface XSports.NBAGameHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.String) -> ())? onOpenPlay;
    XSports.BasketballShotClockView shotClockView;
    XSports.BasketballRunView runView;
    XSports.SportsGameScoreboardView XSports.NBAGameState scoreboard;
    XSports.BasketballCourtView courtView;
    XSports.SportsLastPlayBarView lastPlayBarView;
    XSports.SportsHeroHighlightsPill ? highlights;
    nominal type descriptor for CoreGraphics.CGFloat minimizeProgress;
    Swift.String? lastPlayID;
    Swift.Bool isGameClockRunning;
    __C.CADisplayLink? clockLink;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)didTapLastPlay;

@end

#endif /* _TtC7XSports15NBAGameHeroView_h */
