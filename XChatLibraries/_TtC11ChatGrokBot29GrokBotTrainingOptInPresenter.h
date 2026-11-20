//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h
#define _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAccountLinkService, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotTrainingOptInTrayBuilder, ChatGrokUpsell.PremiumUpsellNavigation, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotTrainingOptInPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAccountLinkService accountLinkService;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotTrainingOptInTrayBuilder trayBuilder;
}

@end

#endif /* _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h */
