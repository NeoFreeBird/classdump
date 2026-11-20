//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h
#define _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.XChatConversationKeyService, ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSend.ChatGroupAvatarUploader, ChatSync.XChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, ChatTransport.XChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatEditGroupActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatSyncState.ChatActionStream actionStream;
    ChatKeys.XChatConversationKeyService conversationKeyService;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSend.ChatGroupAvatarUploader groupAvatarUploader;
    ChatSync.XChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h */
