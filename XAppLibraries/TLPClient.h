//
#ifndef TLPClient_h
#define TLPClient_h
@import Foundation;

#include "TLPClientConfiguration.h"
#include "TLPNetworkManager.h"

@class NSArray, NSObject;

@interface TLPClient : NSObject

@property (readonly, nonatomic) TLPNetworkManager *networkManager;
@property (readonly, nonatomic) TLPClientConfiguration *configuration;
@property (copy, nonatomic) NSArray *pausedSubscriptions;

/* instance methods */
- (id)initWithAccountID:(id)id session:(id)session configuration:(id)configuration scribeWriter:(id)writer;
- (id)initWithConfiguration:(id)configuration networkManager:(id)manager;
- (void)_tlp_LPWasDisabled;
- (void)_tlp_eventTypeWasDisabled:(id)disabled;
- (void)subscribe:(id)subscribe;
- (void)unsubscribe:(id)unsubscribe;
- (void)updateSubscriptions:(id)subscriptions unsubscribe:(id)unsubscribe;
- (void)unsubscribeAll;
- (void)unsubscribeSubscriptionForEventType:(long long)type;
- (void)pauseSubscriptions:(id /* block */)subscriptions;
- (void)resumePausedSubscriptions;

@end

#endif /* TLPClient_h */
