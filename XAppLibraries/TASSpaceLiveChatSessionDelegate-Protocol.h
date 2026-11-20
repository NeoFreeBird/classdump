//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
