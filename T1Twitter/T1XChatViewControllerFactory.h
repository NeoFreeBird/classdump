//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1XChatViewControllerFactory_h
#define T1XChatViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1XChatViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)createWithAccount:(id)account conversationID:(id)id;
+ (id)createOneOnOneConversationWithAccount:(id)account userID:(long long)id;
+ (id)createGrokBotsWithAccount:(id)account agentID:(id)id;
+ (id)grokBotsAgentIDWithAccount:(id)account agentID:(id)id prompt:(id)prompt;
+ (_Bool)presentGrokBotsInboxPromptIfNeededWithAccount:(id)account agentID:(id)id presenter:(id)presenter onTryGrokBot:(id /* block */)bot;
+ (_Bool)opensInboxBeforeGrokBotsWithAccount:(id)account agentID:(id)id;
+ (void)presentGrokBotsInboxPromptOnceEnrollmentIsKnownWithAccount:(id)account presenter:(id)presenter openGrokBot:(id /* block */)bot;
+ (id)createConversationFromCardWithAccount:(id)account recipientUserID:(long long)id prefilledText:(id)text quotedStatus:(id)status;
+ (id)createRequestToJoinGroupWithAccount:(id)account conversationID:(id)id token:(id)token;
+ (void)createChangePasscodeFlowWithAccount:(id)account listener:(id)listener completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* T1XChatViewControllerFactory_h */
