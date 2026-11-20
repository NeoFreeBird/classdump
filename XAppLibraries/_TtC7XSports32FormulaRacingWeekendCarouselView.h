//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports32FormulaRacingWeekendCarouselView_h
#define _TtC7XSports32FormulaRacingWeekendCarouselView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.FormulaRacingRollingLabel, XSports.FormulaRacingRoundIndicatorView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.FormulaRacingWeekendCard, _$sSa -> XSports.FormulaRacingWeekendCardView, _$sSa -> _$s12CoreGraphics7CGFloatVMn, _$sSi, _$sSiSg, _$sSo12UIScrollViewC, _$sSo16TIPImagePipelineCSg, _$sySScSg, _$syycSg;

@interface XSports.FormulaRacingWeekendCarouselView : XSports.MeasurableView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.String) -> ())? onSelect;
    (() -> ())? onSettle;
    ((Swift.String) -> ())? onOpen;
    nominal type descriptor for CoreGraphics.CGFloat collapse;
    __C.UIScrollView scrollView;
    XSports.FormulaRacingRollingLabel datesLabel;
    XSports.FormulaRacingRoundIndicatorView indicatorView;
    Swift.Int? datesIndex;
    Swift.Array -> XSports.FormulaRacingWeekendCard cards;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat chipWidths;
    Swift.Array -> XSports.FormulaRacingWeekendCardView cardViews;
    Swift.Int selectedIndex;
    Swift.Int settledIndex;
    nominal type descriptor for CoreGraphics.CGFloat position;
    Swift.Bool needsScrollToSelection;
    Swift.Bool isApplyingGeometry;
    nominal type descriptor for CoreGraphics.CGFloat appliedCollapse;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTap:(id)tap;

@end

#endif /* _TtC7XSports32FormulaRacingWeekendCarouselView_h */
