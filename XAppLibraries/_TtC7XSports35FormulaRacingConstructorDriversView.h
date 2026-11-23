//
#ifndef _TtC7XSports35FormulaRacingConstructorDriversView_h
#define _TtC7XSports35FormulaRacingConstructorDriversView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> XSports.FormulaRacingConstructorDriverChip, _$sSo6UIViewC;

@interface XSports.FormulaRacingConstructorDriversView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.Athlete _$scSg -> onSelect;
    Swift.Array -> XSports.FormulaRacingConstructorDriverChip chips;
    __C.UIView barTrack;
    __C.UIView barFill;
    nominal type descriptor for CoreGraphics.CGFloat ? leadShare;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports35FormulaRacingConstructorDriversView_h */
