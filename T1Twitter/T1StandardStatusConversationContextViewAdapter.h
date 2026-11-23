//
#ifndef T1StandardStatusConversationContextViewAdapter_h
#define T1StandardStatusConversationContextViewAdapter_h
@import Foundation;

#include "TTATimelinesStatusConversationContextViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusConversationContextViewAdapter : TFNComposableViewAdapter <TTATimelinesStatusConversationContextViewDelegate>

@property (nonatomic) unsigned long long displayType;
@property (retain, nonatomic) TFNComposableViewAdapter *tweetstormIndicatorAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)conversationContextViewDidTap:(id)tap;
- (void)conversationContextViewDidLongPress:(id)press;
- (id)_t1_previewingAction:(id)action;
- (id)_t1_handleStatusViewEventWithType:(id)type;

@end

#endif /* T1StandardStatusConversationContextViewAdapter_h */
