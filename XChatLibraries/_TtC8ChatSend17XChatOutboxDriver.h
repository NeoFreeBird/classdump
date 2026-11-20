//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend17XChatOutboxDriver_h
#define _TtC8ChatSend17XChatOutboxDriver_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.XChatConversationKeyIndex, ChatKeys.XChatMessageCrypto, ChatModelsCore.UserID, ChatSend.ChatForwardedContentResolver, ChatSend.ChatMediaUploader, ChatSend.ChatSendActivityStream, ChatSend.XChatMessageEnvelopeSender, ChatSend.XChatReplyPreviewBuilder, ChatSend.XChatSendFailureHandler, ChatSend.XChatSendKeyResolver, ChatSync.ChatCardPreviewLoader, ChatSync.ChatMediaDownloader, ChatSync.XChatProjection, ChatSyncState.ChatOutgoingAttachmentPreparing, ChatSyncState.ChatSessionScribing, Swift.Bool, _$s10Foundation3URLVMn, _$sSDySS ChatSend.XChatOutboxDriver.SendTask, _TtCs12_SwiftObject;

@interface ChatSend.XChatOutboxDriver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatKeys.XChatConversationKeyIndex conversationKeyIndex;
    ChatSync.XChatProjection projection;
    ChatModelsCore.UserID owner;
    ChatSend.XChatMessageEnvelopeSender envelopeSender;
    ChatSend.XChatSendKeyResolver keyResolver;
    ChatSend.XChatReplyPreviewBuilder replyPreviewBuilder;
    ChatSend.XChatSendFailureHandler failureHandler;
    ChatKeys.XChatMessageCrypto messageCrypto;
    ChatSend.ChatMediaUploader mediaUploader;
    ChatSync.ChatMediaDownloader mediaDownloader;
    nominal type descriptor for Foundation.URL outboxDirectoryURL;
    ChatSync.ChatCardPreviewLoader cardPreviewLoader;
    ChatSend.ChatForwardedContentResolver forwardedContentResolver;
    ChatSyncState.ChatOutgoingAttachmentPreparing attachmentPreparer;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSend.ChatSendActivityStream sendActivityStream;
    Swift.Dictionary empty-list Swift.String ChatSend.XChatOutboxDriver.SendTask sendTasks;
    Swift.Bool isStopped;
}

@end

#endif /* _TtC8ChatSend17XChatOutboxDriver_h */
