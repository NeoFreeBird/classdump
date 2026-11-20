//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TreeItemLayoutState_h
#define TreeItemLayoutState_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"

@class TFNComposableViewLayoutState;

@interface TreeItemLayoutState : TFNComposableViewLayoutState

@property (readonly, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;

/* instance methods */
- (id)init;
- (id)initWithConversationTreeContext:(id)context;

@end

#endif /* TreeItemLayoutState_h */
