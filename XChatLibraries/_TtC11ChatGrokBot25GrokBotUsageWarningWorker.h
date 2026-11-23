//
#ifndef _TtC11ChatGrokBot25GrokBotUsageWarningWorker_h
#define _TtC11ChatGrokBot25GrokBotUsageWarningWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotUsageLimitCardStream, ChatGrokBot.GrokBotUsageWarningStream, ChatGrokUpsell.PremiumUpsellNavigation, ChatModels.PremiumSubscriptionTierStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatGrokBot.GrokBotUsageWarningWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatModels.PremiumSubscriptionTierStream premiumSubscriptionTierStream;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatGrokBot.GrokBotUsageLimitCardStream usageLimitCardStream;
    ChatGrokBot.GrokBotUsageWarningStream usageWarningStream;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotUsageWarningWorker_h */
