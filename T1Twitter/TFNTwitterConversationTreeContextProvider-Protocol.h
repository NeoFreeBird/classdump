//
#ifndef TFNTwitterConversationTreeContextProvider_Protocol_h
#define TFNTwitterConversationTreeContextProvider_Protocol_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"

@protocol TFNTwitterConversationTreeContextProvider

@required

@property (nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;

@optional

@end

#endif /* TFNTwitterConversationTreeContextProvider_Protocol_h */
