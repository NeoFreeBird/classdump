//
#ifndef TLPSubscriptionCollection_h
#define TLPSubscriptionCollection_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface TLPSubscriptionCollection : NSObject {
    /* instance variables */
    NSMutableDictionary *_subscriptions;
}

/* instance methods */
- (id)init;
- (_Bool)isEmpty;
- (void)add:(id)add;
- (void)remove:(id)remove;
- (void)removeSubscriptionsByTopic:(id)topic;
- (void)removeAll;
- (void)pauseAndRemoveAll;
- (void)changeState:(long long)state;
- (_Bool)contains:(id)contains;
- (_Bool)containsTopic:(id)topic;
- (id)allTopics;
- (id)allSubscriptions;
- (void)distributeEvent:(id)event;

@end

#endif /* TLPSubscriptionCollection_h */
