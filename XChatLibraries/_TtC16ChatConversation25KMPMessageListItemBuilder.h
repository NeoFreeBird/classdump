//
#ifndef _TtC16ChatConversation25KMPMessageListItemBuilder_h
#define _TtC16ChatConversation25KMPMessageListItemBuilder_h
@import Foundation;

@class ChatConversation.ConversationHeaderViewModelBuilder, ChatConversation.InfoListItemBuilder, ChatKotlin.ConversationObjectGraphProvider, ChatKotlin.ObjectGraphProvider, ChatModels.ConversationChatItemsStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _TtCs12_SwiftObject;

@interface ChatConversation.KMPMessageListItemBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatConversation.ConversationHeaderViewModelBuilder conversationHeaderViewModelBuilder;
    ChatModelsCore.ConversationID conversationID;
    ChatKotlin.ConversationObjectGraphProvider conversationObjectGraphProvider;
    ChatConversation.InfoListItemBuilder infoListItemBuilder;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC16ChatConversation25KMPMessageListItemBuilder_h */
