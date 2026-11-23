//
#ifndef _TtC13ChatUtilities19PinnedMessageSender_h
#define _TtC13ChatUtilities19PinnedMessageSender_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatModels.ConversationPinnedMessagesStream, ChatUtilities.PinnedMessageSendHandling, _TtCs12_SwiftObject;

@interface ChatUtilities.PinnedMessageSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatUtilities.PinnedMessageSendHandling sendHandler;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC13ChatUtilities19PinnedMessageSender_h */
