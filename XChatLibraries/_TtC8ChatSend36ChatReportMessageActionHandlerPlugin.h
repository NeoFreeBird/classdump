//
#ifndef _TtC8ChatSend36ChatReportMessageActionHandlerPlugin_h
#define _TtC8ChatSend36ChatReportMessageActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatMessageCrypto, ChatSend.ChatMediaUploader, ChatSync.ChatMediaDownloader, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, ChatTransport.ChatThriftCodec, _TtCs12_SwiftObject;

@interface ChatSend.ChatReportMessageActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatProjection projection;
    ChatKeys.ChatMessageCrypto messageCrypto;
    ChatSync.ChatMediaDownloader mediaDownloader;
    ChatSend.ChatMediaUploader mediaUploader;
    ChatTransport.ChatThriftCodec codec;
}

@end

#endif /* _TtC8ChatSend36ChatReportMessageActionHandlerPlugin_h */
