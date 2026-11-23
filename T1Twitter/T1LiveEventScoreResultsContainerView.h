//
#ifndef T1LiveEventScoreResultsContainerView_h
#define T1LiveEventScoreResultsContainerView_h
@import Foundation;

#include "T1LiveEventScoreResultView.h"

@class TFSTwitterMomentSportEventUpdate, UILabel, UIStackView, UIView;

@interface T1LiveEventScoreResultsContainerView : UIView

@property (readonly, nonatomic) UIStackView *containerStackView;
@property (readonly, nonatomic) UIStackView *resultsStackView;
@property (readonly, nonatomic) T1LiveEventScoreResultView *leftResultView;
@property (readonly, nonatomic) T1LiveEventScoreResultView *rightResultView;
@property (readonly, nonatomic) UILabel *middleSeparator;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) TFSTwitterMomentSportEventUpdate *eventUpdate;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_updateSubviews;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventScoreResultsContainerView_h */
