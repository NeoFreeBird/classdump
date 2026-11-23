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
