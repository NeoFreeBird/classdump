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
