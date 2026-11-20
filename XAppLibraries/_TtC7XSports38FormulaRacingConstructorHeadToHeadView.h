//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports38FormulaRacingConstructorHeadToHeadView_h
#define _TtC7XSports38FormulaRacingConstructorHeadToHeadView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.SportsAvatarView _$s_AAt, _$sSa -> XSports.FormulaRacingConstructorHeadToHeadView.Row, _$sSo22UIAccessibilityElementC, _$sSo7UIColorC4fill_AB6accentt, _$sSo7UILabelC_ABt, _$sSo9UIControlC_ABt;

@interface XSports.FormulaRacingConstructorHeadToHeadView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.Athlete _$scSg -> onSelect;
    XSports.SportsAvatarView _$s_AAt avatars;
    (__C.UILabel, __C.UILabel) names;
    (__C.UILabel, __C.UILabel) pointLabels;
    (__C.UIControl, __C.UIControl) controls;
    __C.UIAccessibilityElement summaryElement;
    Swift.Array -> XSports.FormulaRacingConstructorHeadToHeadView.Row rows;
    (fill: __C.UIColor, accent: __C.UIColor) colors;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports38FormulaRacingConstructorHeadToHeadView_h */
