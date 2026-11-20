//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24MLBBracketSeriesCardView_h
#define _TtC7XSports24MLBBracketSeriesCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.MLBBracketState.Series ?, _$sSa -> XSports.MLBBracketSeriesCardView.TeamRow, _$sSo7UILabelC, _$syycSg;

@interface XSports.MLBBracketSeriesCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    Swift.Bool isCompact;
    __C.UILabel titleLabel;
    __C.UILabel trailingLabel;
    Swift.Array -> XSports.MLBBracketSeriesCardView.TeamRow rows;
    XSports.MLBBracketState.Series ? series;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24MLBBracketSeriesCardView_h */
