//
#ifndef _TtC7XSports18SoccerGameHeroView_h
#define _TtC7XSports18SoccerGameHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SoccerPitchView, XSports.SportsGameScoreboardView XSports.SoccerGameState, XSports.SportsLastPlayBarView, _$sSSSg, _$sSo16TIPImagePipelineCSg, _$sySScSg;

@interface XSports.SoccerGameHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.String) -> ())? onOpenPlay;
    XSports.SportsGameScoreboardView XSports.SoccerGameState scoreboard;
    XSports.SoccerPitchView pitchView;
    XSports.SportsLastPlayBarView lastPlayBarView;
    Swift.String? lastPlayID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapLastPlay;

@end

#endif /* _TtC7XSports18SoccerGameHeroView_h */
