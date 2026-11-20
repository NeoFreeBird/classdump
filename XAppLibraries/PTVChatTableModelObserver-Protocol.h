//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatTableModelObserver_Protocol_h
#define PTVChatTableModelObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatTableModelObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatTableModelDidReloadMessages:(id)messages;
- (void)chatTableModel:(id)model didAppendMessage:(id)message;
- (void)chatTableModelDidUpdateNumberOfUnreadMessages:(id)messages;

@end

#endif /* PTVChatTableModelObserver_Protocol_h */
