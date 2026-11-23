//
#ifndef _TtC16ChatConversation27MessageListRegistriesWorker_h
#define _TtC16ChatConversation27MessageListRegistriesWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageTextRegistry, ChatUtilities.AttachmentMediaRegistry, ChatUtilities.AttachmentMediaStateStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListRegistriesWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    ChatUtilities.AttachmentMediaStateStream mediaStateStream;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.MessageTextRegistry messageTextRegistry;
}

@end

#endif /* _TtC16ChatConversation27MessageListRegistriesWorker_h */
