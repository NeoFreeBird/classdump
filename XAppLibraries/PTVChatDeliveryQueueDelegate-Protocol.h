//
#ifndef PTVChatDeliveryQueueDelegate_Protocol_h
#define PTVChatDeliveryQueueDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatDeliveryQueueDelegate <NSObject>

@required

/* required instance methods */
- (void)chatDeliveryQueueDidDeliverMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (_Bool)chatDeliveryQueueShouldDeliverMessage:(id)message;
- (_Bool)chatDeliveryQueueShouldImmediatelyUnloadBroadcastEndedMessage:(id)message;
- (_Bool)chatDeliveryQueueShouldIgnoreMessage:(id)message;

@optional

/* optional instance methods */
- (void)chatDeliveryQueueDidDropMessage:(id)message;

@end

#endif /* PTVChatDeliveryQueueDelegate_Protocol_h */
