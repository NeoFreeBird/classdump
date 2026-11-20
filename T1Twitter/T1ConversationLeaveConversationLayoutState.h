//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
