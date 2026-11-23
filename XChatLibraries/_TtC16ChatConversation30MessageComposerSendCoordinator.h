//
#ifndef _TtC16ChatConversation30MessageComposerSendCoordinator_h
#define _TtC16ChatConversation30MessageComposerSendCoordinator_h
@import Foundation;

@class ChatConversation.TextEntityParser, ChatMessageComposer.MessageRateLimitUpsellPresenter, ChatModels.AttachmentProcessingStream, ChatModels.ConversationSendInitiatedStream, ChatModelsCore.ConversationID, ChatModelsCore.ConversationID ?, ChatSyncState.ChatActionStream, ChatSyncState.ChatSendSurface, _$sSi, _TtCs12_SwiftObject;

@interface ChatConversation.MessageComposerSendCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.AttachmentProcessingStream attachmentProcessingStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    ChatModelsCore.ConversationID ? forwardSourceConversationID;
    Swift.Int maxAttachmentsPerMessage;
    ChatMessageComposer.MessageRateLimitUpsellPresenter rateLimitUpsellPresenter;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatSendSurface sendSurface;
    ChatConversation.TextEntityParser textEntityParser;
}

@end

#endif /* _TtC16ChatConversation30MessageComposerSendCoordinator_h */
