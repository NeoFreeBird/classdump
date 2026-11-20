//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventScoreView_h
#define T1LiveEventScoreView_h
@import Foundation;

#include "T1LiveEventScoreParticipantView.h"
#include "T1LiveEventScoreResultsContainerView.h"

@class TFSTwitterMomentSportEventUpdate, TIPImagePipeline, UIStackView, UIView;

@interface T1LiveEventScoreView : UIView

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) T1LiveEventScoreParticipantView *leftParticipantView;
@property (readonly, nonatomic) T1LiveEventScoreResultsContainerView *resultsContainerView;
@property (readonly, nonatomic) T1LiveEventScoreParticipantView *rightParticipantView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) TFSTwitterMomentSportEventUpdate *eventUpdate;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithImagePipeline:(id)pipeline;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_t1_updateSubviews;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventScoreView_h */
