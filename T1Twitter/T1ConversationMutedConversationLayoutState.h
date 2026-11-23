//
#ifndef T1ConversationMutedConversationLayoutState_h
#define T1ConversationMutedConversationLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState;

@interface T1ConversationMutedConversationLayoutState : TFNComposableViewLayoutState

@property (nonatomic) _Bool conversationMuted;

/* instance methods */
- (_Bool)isConversationMuted;

@end

#endif /* T1ConversationMutedConversationLayoutState_h */
