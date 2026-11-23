//
#ifndef T1LiveEventScoreResultView_h
#define T1LiveEventScoreResultView_h
@import Foundation;

#include "T1ScoreParticipantInfo.h"

@class UILabel, UIStackView, UIView;

@interface T1LiveEventScoreResultView : UIView

@property (readonly, nonatomic) UIStackView *scoreStackView;
@property (readonly, nonatomic) UILabel *primaryScoreLabel;
@property (readonly, nonatomic) UILabel *secondaryScoreLabel;
@property (retain, nonatomic) T1ScoreParticipantInfo *participantInfo;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_updateSubviews;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventScoreResultView_h */
