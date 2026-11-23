//
#ifndef TLPSubscription_h
#define TLPSubscription_h
@import Foundation;

#include "TLPSubscriptionDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TLPSubscription : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_eventDelegateQueue;
}

@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSString *eventTopic;
@property (readonly, weak, nonatomic) id <TLPSubscriptionDelegate> eventDelegate;
@property (readonly, nonatomic) long long state;

/* instance methods */
- (id)initWithEventType:(long long)type topicID:(id)id delegate:(id)delegate;
- (id)initWithTopic:(id)topic delegate:(id)delegate;
- (void)distributeEvent:(id)event;
- (void)didChangeState:(long long)state;

@end

#endif /* TLPSubscription_h */
