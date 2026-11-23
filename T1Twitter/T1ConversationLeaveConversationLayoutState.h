//
#ifndef T1ConversationLeaveConversationLayoutState_h
#define T1ConversationLeaveConversationLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState;

@interface T1ConversationLeaveConversationLayoutState : TFNComposableViewLayoutState

@property (nonatomic) _Bool viewerUnmentioned;

/* instance methods */
- (_Bool)isViewerUnmentioned;

@end

#endif /* T1ConversationLeaveConversationLayoutState_h */
