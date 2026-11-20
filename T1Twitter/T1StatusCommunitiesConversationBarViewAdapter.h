//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusCommunitiesConversationBarViewAdapter_h
#define T1StatusCommunitiesConversationBarViewAdapter_h
@import Foundation;

#include "T1StatusCommunitiesConversationBarViewDelegate-Protocol.h"
#include "TTACoreStatusViewInlineActions-Protocol.h"

@class NSString, TFNComposableViewAdapter, TTACoreStatusLiveEngagementManager;

@interface T1StatusCommunitiesConversationBarViewAdapter : TFNComposableViewAdapter <T1StatusCommunitiesConversationBarViewDelegate>

@property (readonly, nonatomic) id <TTACoreStatusViewInlineActions> inlineActions;
@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_t1_updateWithViewModel:(id)model forView:(id)view animated:(_Bool)animated;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)conversationBarView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)conversationBarView:(id)view didTapReplyBarView:(id)view;
- (void)_t1_handleInlineActionTapEventForInlineActionType:(unsigned long long)type conversationBarView:(id)view sourceView:(id)view options:(unsigned long long)options;

@end

#endif /* T1StatusCommunitiesConversationBarViewAdapter_h */
