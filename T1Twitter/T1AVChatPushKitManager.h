//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AVChatPushKitManager_h
#define T1AVChatPushKitManager_h
@import Foundation;

#include "PKPushRegistryDelegate-Protocol.h"
#include "TFNTwitterAccountServiceObserver-Protocol.h"

@class NSObject;

@interface T1AVChatPushKitManager : NSObject <PKPushRegistryDelegate, TFNTwitterAccountServiceObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *pushRegistry;
    NSNumber"16@0:8 *accountServiceObserverToken;
    NSNumber"16@0:8 *xChatCallAnswerCancellable;
    NSNumber"16@0:8 *isStarted;
}

/* class methods */
+ (id)sharedManager;
+ (void)startCallServicesAtLaunchIfEnabled;

/* instance methods */
- (void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didReceiveIncomingVoIPPushWithPayload:(id)payload metadata:(id)metadata withCompletionHandler:(id /* block */)handler;
- (void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;
- (void)accountService:(id)service addedAccount:(id)account;
- (void)accountService:(id)service willRemoveAccount:(id)account;
- (void)accountService:(id)service removedAccountWithAccountID:(id)id;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)featureSwitchesDidUpdate;
- (void)applicationWillEnterForeground;

@end

#endif /* T1AVChatPushKitManager_h */
