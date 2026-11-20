//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
