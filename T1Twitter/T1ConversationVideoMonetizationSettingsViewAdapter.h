//
#ifndef T1ConversationVideoMonetizationSettingsViewAdapter_h
#define T1ConversationVideoMonetizationSettingsViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1ConversationVideoMonetizationSettingsViewAdapter : TFNComposableViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutSpecForSettings:(id)settings;

@end

#endif /* T1ConversationVideoMonetizationSettingsViewAdapter_h */
