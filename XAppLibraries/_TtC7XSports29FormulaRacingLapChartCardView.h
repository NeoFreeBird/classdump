//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports29FormulaRacingLapChartCardView_h
#define _TtC7XSports29FormulaRacingLapChartCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.FormulaRacingLapChartCardView.Content ?, _$sSaySo6UIViewCG, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.FormulaRacingLapChartCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIView cardView;
    __C.UILabel titleLabel;
    __C.UILabel descriptionLabel;
    __C.UIImageView chevronView;
    __C.UIView stripView;
    [__C.UIView] segmentViews;
    XSports.FormulaRacingLapChartCardView.Content ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports29FormulaRacingLapChartCardView_h */
