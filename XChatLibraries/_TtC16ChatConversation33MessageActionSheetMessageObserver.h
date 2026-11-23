//
#ifndef _TtC16ChatConversation33MessageActionSheetMessageObserver_h
#define _TtC16ChatConversation33MessageActionSheetMessageObserver_h
@import Foundation;

@class ChatConversation.MessageListItemBuilder, ChatModels.ConversationMetadataStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, DispatchQueue, _TtCs12_SwiftObject;

@interface ChatConversation.MessageActionSheetMessageObserver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatConversation.MessageListItemBuilder nativeMessageListItemBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation33MessageActionSheetMessageObserver_h */
