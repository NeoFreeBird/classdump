//
#ifndef T1LiveEventScoreParticipantView_h
#define T1LiveEventScoreParticipantView_h
@import Foundation;

#include "T1ScoreParticipantInfo.h"

@class UIImageView, UILabel, UIStackView, UIView;

@interface T1LiveEventScoreParticipantView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIImageView *logoImageView;
@property (readonly, nonatomic) UILabel *abbreviationLabel;
@property (retain, nonatomic) T1ScoreParticipantInfo *participantInfo;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithImagePipeline:(id)pipeline;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_t1_updateSubviews;
- (id)_t1_abbreviationFont;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventScoreParticipantView_h */
