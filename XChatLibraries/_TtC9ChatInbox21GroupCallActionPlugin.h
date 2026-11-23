//
#ifndef _TtC9ChatInbox21GroupCallActionPlugin_h
#define _TtC9ChatInbox21GroupCallActionPlugin_h
@import Foundation;

@class ChatConversationList.ConversationActionContext, ChatInbox.InboxCallStatusStream, ChatModels.CallNavigation, ChatModels.ConversationCallActionTriggerStream, _TtCs12_SwiftObject;

@interface ChatInbox.GroupCallActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    ChatModels.CallNavigation callNavigation;
    ChatConversationList.ConversationActionContext context;
    ChatInbox.InboxCallStatusStream inboxCallStatusStream;
}

@end

#endif /* _TtC9ChatInbox21GroupCallActionPlugin_h */
