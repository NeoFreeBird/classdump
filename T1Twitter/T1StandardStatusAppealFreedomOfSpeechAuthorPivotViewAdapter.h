//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusAppealFreedomOfSpeechAuthorPivotViewAdapter_h
#define T1StandardStatusAppealFreedomOfSpeechAuthorPivotViewAdapter_h
@import Foundation;

#include "T1AppealFreedomOfSpeechAuthorPivotViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusAppealFreedomOfSpeechAuthorPivotViewAdapter : TFNComposableViewAdapter <T1AppealFreedomOfSpeechAuthorPivotViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)accessibilityPerformTapActionInView:(id)view;
- (void)appealFreedomOfSpeechDidTapAuthorPivotView:(id)view;

@end

#endif /* T1StandardStatusAppealFreedomOfSpeechAuthorPivotViewAdapter_h */
