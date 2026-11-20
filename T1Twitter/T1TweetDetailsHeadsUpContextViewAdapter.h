//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetDetailsHeadsUpContextViewAdapter_h
#define T1TweetDetailsHeadsUpContextViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1TweetDetailsHeadsUpContextViewAdapter : TFNComposableViewAdapter

/* class methods */
+ (_Bool)isUnderFatigueRuleThreshold:(id)threshold;
+ (void)createOrUpdateFatigueRuleThresholdData:(id)data;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateView:(id)view account:(id)account;
- (_Bool)_t1_shouldPresentView:(id)view;

@end

#endif /* T1TweetDetailsHeadsUpContextViewAdapter_h */
