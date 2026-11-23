//
#ifndef _TtC16ChatConversation23MessageOpenActionPlugin_h
#define _TtC16ChatConversation23MessageOpenActionPlugin_h
@import Foundation;

@class ChatConversation.MessageActionIdentifier, ChatConversation.MessageActionPluginContext, ChatConversation.MessageActionSection, ChatConversationServices.ChatLinkWarningPresenter, ChatConversationServices.ConversationNavigation, _TtCs12_SwiftObject;

@interface ChatConversation.MessageOpenActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageActionPluginContext context;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversationServices.ChatLinkWarningPresenter linkWarningPresenter;
    ChatConversation.MessageActionIdentifier identifier;
    ChatConversation.MessageActionSection section;
}

@end

#endif /* _TtC16ChatConversation23MessageOpenActionPlugin_h */
