//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot18GrokBotPageActions_h
#define _TtC11ChatGrokBot18GrokBotPageActions_h
@import Foundation;

@class ChatConversationServices.ConversationNavigation, ChatGrokBot.GrokBotPageStore, ChatGrokBot.GrokBotPagesStream, ChatGrokBot.GrokBotScribing, ChatModels.ChatToastActionTriggerStream, ChatUI.ChatNavigationStackFactory, GrokBotRelay.GrokBotRepository, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotPageActions : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    ChatGrokBot.GrokBotPageStore pageStore;
    ChatGrokBot.GrokBotPagesStream pagesStream;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Set<Swift.String> writingPageIDs;
}

@end

#endif /* _TtC11ChatGrokBot18GrokBotPageActions_h */
