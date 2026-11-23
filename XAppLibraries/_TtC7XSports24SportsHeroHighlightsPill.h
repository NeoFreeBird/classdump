//
#ifndef _TtC7XSports24SportsHeroHighlightsPill_h
#define _TtC7XSports24SportsHeroHighlightsPill_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, _$s13XDesignSystem6ButtonCMn, _$syycSg;

@interface XSports.SportsHeroHighlightsPill : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    Swift.Bool isReady;
    nominal type descriptor for XDesignSystem.Button button;
    Swift.Bool needsInitialPlacement;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didMoveToSuperview;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports24SportsHeroHighlightsPill_h */
