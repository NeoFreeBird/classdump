//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
