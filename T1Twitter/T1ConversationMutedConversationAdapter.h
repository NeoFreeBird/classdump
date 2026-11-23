//
#ifndef T1ConversationMutedConversationAdapter_h
#define T1ConversationMutedConversationAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1ConversationMutedConversationAdapter : TFNComposableViewAdapter

/* instance methods */
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;

@end

#endif /* T1ConversationMutedConversationAdapter_h */
