//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
