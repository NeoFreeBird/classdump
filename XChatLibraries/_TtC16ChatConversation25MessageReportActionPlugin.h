//
#ifndef _TtC16ChatConversation25MessageReportActionPlugin_h
#define _TtC16ChatConversation25MessageReportActionPlugin_h
@import Foundation;

@class ChatConversation.MessageActionIdentifier, ChatConversation.MessageActionPluginContext, ChatConversation.MessageActionSection, ChatConversation.MessageActionSending, ChatConversationServices.ConversationNavigation, ChatModelsCore.ConversationID, Swift.Bool, _$s6XIcons5XIconOMn ?, _$sSS, _TtCs12_SwiftObject;

@interface ChatConversation.MessageReportActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageActionPluginContext context;
    ChatModelsCore.ConversationID conversationID;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversation.MessageActionSending messageActionSender;
    ChatConversation.MessageActionIdentifier identifier;
    ChatConversation.MessageActionSection section;
    Swift.String title;
    nominal type descriptor for XIcons.XIcon ? icon;
    Swift.Bool isDestructive;
}

@end

#endif /* _TtC16ChatConversation25MessageReportActionPlugin_h */
