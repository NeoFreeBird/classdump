//
#ifndef TTAConversationContextLayoutState_Protocol_h
#define TTAConversationContextLayoutState_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAConversationContextLayoutState <NSObject>

@required

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } conversationContextTextFrame;

@optional

@end

#endif /* TTAConversationContextLayoutState_Protocol_h */
