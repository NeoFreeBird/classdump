//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation36NativeMessageComposerSendCoordinator_h
#define _TtC16ChatConversation36NativeMessageComposerSendCoordinator_h
@import Foundation;

@class ChatConversation.NativeTextEntityParser, ChatMessageComposer.MessageRateLimitUpsellPresenter, ChatModels.AttachmentProcessingStream, ChatModels.ConversationSendInitiatedStream, ChatModelsCore.ConversationID, ChatModelsCore.ConversationID ?, ChatSyncState.ChatActionStream, ChatSyncState.ChatSendSurface, _$sSi, _TtCs12_SwiftObject;

@interface ChatConversation.NativeMessageComposerSendCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.AttachmentProcessingStream attachmentProcessingStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    ChatModelsCore.ConversationID ? forwardSourceConversationID;
    Swift.Int maxAttachmentsPerMessage;
    ChatMessageComposer.MessageRateLimitUpsellPresenter rateLimitUpsellPresenter;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatSendSurface sendSurface;
    ChatConversation.NativeTextEntityParser textEntityParser;
}

@end

#endif /* _TtC16ChatConversation36NativeMessageComposerSendCoordinator_h */
