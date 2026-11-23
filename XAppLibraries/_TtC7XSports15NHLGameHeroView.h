//
#ifndef _TtC7XSports15NHLGameHeroView_h
#define _TtC7XSports15NHLGameHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.HockeyRinkView, XSports.SportsGameScoreboardView XSports.NHLGameState, XSports.SportsHeroHighlightsPill ?, XSports.SportsLastPlayBarView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSo16TIPImagePipelineCSg, _$sySScSg;

@interface XSports.NHLGameHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.String) -> ())? onOpenPlay;
    XSports.SportsGameScoreboardView XSports.NHLGameState scoreboard;
    XSports.HockeyRinkView rinkView;
    XSports.SportsLastPlayBarView lastPlayBarView;
    XSports.SportsHeroHighlightsPill ? highlights;
    nominal type descriptor for CoreGraphics.CGFloat minimizeProgress;
    Swift.String? lastPlayID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapLastPlay;

@end

#endif /* _TtC7XSports15NHLGameHeroView_h */
