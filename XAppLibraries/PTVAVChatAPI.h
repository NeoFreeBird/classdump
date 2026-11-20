//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAVChatAPI_h
#define PTVAVChatAPI_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSObject;

@interface PTVAVChatAPI : NSObject

@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) id /* block */ authenticationBlock;

/* instance methods */
- (id)initWithAuthenticationBlock:(id /* block */)block;
- (void)createBroadcastWithConversationIdentifier:(id)identifier calledTwitterUserIDs:(id)ids audioOnly:(_Bool)only completionBlock:(id /* block */)block;
- (void)publishBroadcastWithBroadcastID:(id)id completionBlock:(id /* block */)block;
- (void)broadcastStatusWithBroadcastID:(id)id completionBlock:(id /* block */)block;
- (void)sendSignalingMessageWithBroadcastID:(id)id recipientTwitterUserID:(id)id message:(id)message completionBlock:(id /* block */)block;
- (void)sendSignalingMessagesWithBroadcastID:(id)id recipientTwitterUserID:(id)id messages:(id)messages completionBlock:(id /* block */)block;
- (id)_signalingMessageDictionary:(id)dictionary;
- (void)receiveSignalingMessagesWithBroadcastID:(id)id cursor:(id)cursor completionBlock:(id /* block */)block;
- (void)joinBroadcastWithBroadcastID:(id)id completionBlock:(id /* block */)block;
- (void)leaveBroadcastWithBroadcastID:(id)id sessionUUID:(id)uuid trigger:(id)trigger description:(id)description completionBlock:(id /* block */)block;
- (void)turnServersWithCompletionBlock:(id /* block */)block;
- (void)guestServicesRequestWithEndpoint:(id)endpoint parameters:(id)parameters completionBlock:(id /* block */)block;
- (void)authenticatedRequestWithBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)authenticateWithCompletion:(id /* block */)completion;
- (void)log:(id)log;
- (void)scribe:(id)scribe;

@end

#endif /* PTVAVChatAPI_h */
