//
#ifndef T1BroadcasterLiveChatSessionDelegate_Protocol_h
#define T1BroadcasterLiveChatSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcasterLiveChatSessionDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcasterLiveChatSession:(id)session didReceiveMessages:(id)messages;

@optional

@end

#endif /* T1BroadcasterLiveChatSessionDelegate_Protocol_h */
