//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports32FormulaRacingStandingsHeaderView_h
#define _TtC7XSports32FormulaRacingStandingsHeaderView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSaySo7UILabelCG, _$sSo11UIImageViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface XSports.FormulaRacingStandingsHeaderView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onShowPointsInfo;
    __C.UILabel identityLabel;
    [__C.UILabel] statLabels;
    __C.UIImageView pointsInfoView;
    __C.UIButton pointsInfoButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapPointsInfo;

@end

#endif /* _TtC7XSports32FormulaRacingStandingsHeaderView_h */
