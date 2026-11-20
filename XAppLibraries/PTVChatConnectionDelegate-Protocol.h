//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatConnectionDelegate_Protocol_h
#define PTVChatConnectionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatConnectionDelegate <NSObject>

@required

/* required instance methods */
- (void)didConnect;
- (void)didFailWithError:(id)error;
- (void)didSendMessage:(id)message;
- (void)didReceiveMessage:(id)message;
- (void)addLogEntry:(id)entry;

@optional

@end

#endif /* PTVChatConnectionDelegate_Protocol_h */
