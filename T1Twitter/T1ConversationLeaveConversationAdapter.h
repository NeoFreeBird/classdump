//
#ifndef T1ConversationLeaveConversationAdapter_h
#define T1ConversationLeaveConversationAdapter_h
@import Foundation;

@class TFNComposableViewAdapter, TFNInlineCalloutConfiguration;

@interface T1ConversationLeaveConversationAdapter : TFNComposableViewAdapter

@property (readonly, nonatomic) TFNInlineCalloutConfiguration *config;
@property (nonatomic) _Bool hasLoggedImpression;

/* instance methods */
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)_t1_didTapURL:(id)url inView:(id)view forHostView:(id)view;

@end

#endif /* T1ConversationLeaveConversationAdapter_h */
