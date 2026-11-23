//
#ifndef TASSpaceLiveChatSessionDelegate_Protocol_h
#define TASSpaceLiveChatSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSpaceLiveChatSessionDelegate <NSObject>

@required

/* required instance methods */
- (void)spaceLiveChatSession:(id)session didReceiveMessages:(id)messages;

@optional

@end

#endif /* TASSpaceLiveChatSessionDelegate_Protocol_h */
