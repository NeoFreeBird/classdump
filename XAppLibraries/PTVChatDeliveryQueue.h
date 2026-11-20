//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatDeliveryQueue_h
#define PTVChatDeliveryQueue_h
@import Foundation;

#include "PTVChatDeliveryQueueDelegate-Protocol.h"
#include "PTVMessage.h"

@class NSDate, NSMutableArray, NSObject, NSTimer;

@interface PTVChatDeliveryQueue : NSObject {
    /* instance variables */
    PTVChatDeliveryQueue *_weakSelf;
    NSDate *_heartRateLimitBeginDate;
    long long _heartsReceivedDuringRateLimitPeriod;
    NSDate *_giftHeartRateLimitBeginDate;
    long long _giftHeartsReceivedDuringRateLimitPeriod;
    PTVMessage *_broadcastEndedMessage;
    NSMutableArray *_eventualChatAndShareMessageQueue;
    NSMutableArray *_immediateChatAndShareMessageQueue;
    NSMutableArray *_heartMessageQueue;
    NSMutableArray *_otherMessageQueue;
    double _tweakedQueueProcessingInterval;
}

@property (retain, nonatomic) NSTimer *queueProcessingTimer;
@property (nonatomic) _Bool shouldDeliverImmediateMessage;
@property (nonatomic) _Bool ignoreImmediateChatQueueLimits;
@property (weak, nonatomic) id <PTVChatDeliveryQueueDelegate> chatDeliveryQueueDelegate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)delegate;
- (void)addNewMessageToAppropriateQueue:(id)queue;
- (void)addMessage:(id)message toFrontQueue:(id)queue;
- (void)addMessage:(id)message toQueue:(id)queue;
- (void)messageMuted:(id)muted;
- (void)eventualChatMessageQueueDeliveryBlock;
- (void)immediateChatMessageQueueDeliveryBlock;
- (void)heartMessageQueueDeliveryBlock;
- (void)otherMessageQueueDeliveryBlock;
- (_Bool)unloadBroadcastEndedMessageImmediatelyFromQueue;
- (void)startChatDeliveryIfNeeded;
- (void)stopChatDelivery;
- (void)emptyChatDeliveryQueue;
- (unsigned long long)getIndexForMessage:(id)message inQueue:(id)queue;

@end

#endif /* PTVChatDeliveryQueue_h */
