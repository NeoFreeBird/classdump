//
#ifndef _TtC7XSports29SportsStandingsFilterChipView_h
#define _TtC7XSports29SportsStandingsFilterChipView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, _$sSS, _$sSo7UILabelC, _$sySScSg;

@interface XSports.SportsStandingsFilterChipView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    Swift.String id;
    ((Swift.String) -> ())? onTap;
    Swift.Bool isSelected;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports29SportsStandingsFilterChipView_h */
