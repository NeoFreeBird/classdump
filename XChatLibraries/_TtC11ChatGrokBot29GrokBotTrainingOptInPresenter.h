//
#ifndef _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h
#define _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAccountLinkService, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotTrainingOptInOffers, ChatGrokBot.GrokBotTrainingOptInTrayBuilder, ChatGrokUpsell.PremiumUpsellNavigation, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotTrainingOptInPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAccountLinkService accountLinkService;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotTrainingOptInOffers offers;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotTrainingOptInTrayBuilder trayBuilder;
}

@end

#endif /* _TtC11ChatGrokBot29GrokBotTrainingOptInPresenter_h */
