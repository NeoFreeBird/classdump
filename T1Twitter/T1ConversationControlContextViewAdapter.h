//
#ifndef T1ConversationControlContextViewAdapter_h
#define T1ConversationControlContextViewAdapter_h
@import Foundation;

#include "T1TweetDetailsConversationControlContextView.h"
#include "T1TweetDetailsRedesignedConversationControlView.h"

@class TFNComposableViewAdapter;

@interface T1ConversationControlContextViewAdapter : TFNComposableViewAdapter

@property (retain, nonatomic) T1TweetDetailsRedesignedConversationControlView *redesignedView;
@property (retain, nonatomic) T1TweetDetailsConversationControlContextView *legacyView;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateView:(id)view forViewModel:(id)model;
- (void)_t1_updateRedesignedView:(id)view forViewModel:(id)model;
- (void)_t1_updateLegacyView:(id)view forViewModel:(id)model;
- (id)_t1_attributedTextForRedesign:(id)redesign;
- (id)_t1_richTextLegacyEducationText:(id)text;
- (_Bool)_t1_isSoleConversationControlType:(long long)type forViewModel:(id)model;
- (_Bool)_t1_isRepliesCtaEnabledForAccount:(id)account;

@end

#endif /* T1ConversationControlContextViewAdapter_h */
