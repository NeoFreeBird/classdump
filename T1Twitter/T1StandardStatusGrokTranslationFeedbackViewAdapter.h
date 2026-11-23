//
#ifndef T1StandardStatusGrokTranslationFeedbackViewAdapter_h
#define T1StandardStatusGrokTranslationFeedbackViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGrokTranslationFeedbackViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)initializeView;
- (void)layoutWithLayoutState:(id)state;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGrokTranslationFeedbackViewAdapter_h */
