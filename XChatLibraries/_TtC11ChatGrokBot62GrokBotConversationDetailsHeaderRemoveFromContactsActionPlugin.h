//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot62GrokBotConversationDetailsHeaderRemoveFromContactsActionPlugin_h
#define _TtC11ChatGrokBot62GrokBotConversationDetailsHeaderRemoveFromContactsActionPlugin_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationDetailsContactsStream, ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginContext, ChatGrokBot.GrokBotConversationDetailsHeaderActionSection, ChatGrokBot.GrokBotScribing, ChatModels.ChatContactsIntegrating, ChatModels.ChatToastActionTriggerStream, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotConversationDetailsHeaderRemoveFromContactsActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsIntegrating contactsIntegration;
    ChatGrokBot.GrokBotConversationDetailsContactsStream contactsStream;
    ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginContext context;
    ChatGrokBot.GrokBotScribing scriber;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatGrokBot.GrokBotConversationDetailsHeaderActionSection section;
}

@end

#endif /* _TtC11ChatGrokBot62GrokBotConversationDetailsHeaderRemoveFromContactsActionPlugin_h */
