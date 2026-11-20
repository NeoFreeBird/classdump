//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsHeroHighlightsView_h
#define _TtC7XSports24SportsHeroHighlightsView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsHeroHighlightsMorph.Source ?, XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtc, _$s12CoreGraphics7CGFloatVMn cardWidth_AA8videoToptSg, _$s13XDesignSystem13PageIndicatorCMn, _$s13XDesignSystem4BlurCMn, _$s13XDesignSystem6ButtonCMn, _$sSDySi XSports.SportsInlineVideoSession, _$sSa -> XSports.SportsHeroHighlightsView.Page, _$sSa -> XSports.SportsPlayVideoChapter, _$sSi, _$sSiSg, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$sySScSg, _$syycSg;

@interface XSports.SportsHeroHighlightsView : XSports.MeasurableView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onClose;
    ((Swift.String) -> ())? onPageChange;
    ((Swift.String) -> ())? onSwipe;
    Swift.Array -> XSports.SportsPlayVideoChapter chapters;
    XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtc installPlayVideo;
    __C.UIView cardView;
    __C.UIView contentView;
    nominal type descriptor for XDesignSystem.Blur blurView;
    __C.UIScrollView scrollView;
    nominal type descriptor for XDesignSystem.Button closeButton;
    nominal type descriptor for XDesignSystem.PageIndicator pageIndicator;
    Swift.Array -> XSports.SportsHeroHighlightsView.Page pages;
    Swift.Dictionary empty-list Swift.Int XSports.SportsInlineVideoSession sessions;
    Swift.Int currentIndex;
    Swift.Int? reportedIndex;
    Swift.Bool isOnScreen;
    nominal type descriptor for CoreGraphics.CGFloat cardWidth_AA8videoToptSg videoTopCache;
    XSports.SportsHeroHighlightsMorph.Source ? pendingExpansion;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)actionForLayer:(id)layer forKey:(id)key;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)superview;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24SportsHeroHighlightsView_h */
