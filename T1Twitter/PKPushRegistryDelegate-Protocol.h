//
#ifndef PKPushRegistryDelegate_Protocol_h
#define PKPushRegistryDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PKPushRegistryDelegate <NSObject>

@required

/* required instance methods */
- (void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
- (void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
- (void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;

@optional

/* optional instance methods */
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didReceiveIncomingVoIPPushWithPayload:(id)payload metadata:(id)metadata withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didReceiveIncomingVoIPPushWithPayload:(id)payload metadata:(id)metadata withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;
- (void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;

@end

#endif /* PKPushRegistryDelegate_Protocol_h */
