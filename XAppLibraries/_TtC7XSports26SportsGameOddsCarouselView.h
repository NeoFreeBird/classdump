//
#ifndef _TtC7XSports26SportsGameOddsCarouselView_h
#define _TtC7XSports26SportsGameOddsCarouselView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XDiffableCollection.DiffableView, XSports.SportsGameOddsCarouselView.Content ?, XSports.SportsHorizontalEdgeFade, _$sSo16TIPImagePipelineCSg, _$sySicSg, _$syycSg;

@interface XSports.SportsGameOddsCarouselView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    (() -> ())? onSportsbookClick;
    (() -> ())? onOddsDisplay;
    ((Swift.Int) -> ())? onFocusedCardChange;
    XDiffableCollection.DiffableView diffableView;
    XSports.SportsHorizontalEdgeFade edgeFade;
    XSports.SportsGameOddsCarouselView.Content ? content;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports26SportsGameOddsCarouselView_h */
