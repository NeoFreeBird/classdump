//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports27FormulaRacingTitleFightView_h
#define _TtC7XSports27FormulaRacingTitleFightView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.FormulaRacingTitleFight ?, _$sSa -> XSports.FormulaRacingTitleFightView.RowControl, _$sSaySo7UILabelCGSg, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.FormulaRacingTitleFightView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XSports.Athlete _$scSg -> onSelectAthlete;
    __C.UILabel titleLabel;
    __C.UILabel captionLabel;
    __C.UIView pointsSwatch;
    __C.UIView maxSwatch;
    [__C.UILabel]? $__lazy_storage_$_legendLabels;
    Swift.Array -> XSports.FormulaRacingTitleFightView.RowControl rows;
    XSports.FormulaRacingTitleFight ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapRow:(id)row;

@end

#endif /* _TtC7XSports27FormulaRacingTitleFightView_h */
