//
#ifndef _TtC11ChatGrokBot25GrokBotAvailabilityWorker_h
#define _TtC11ChatGrokBot25GrokBotAvailabilityWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotTemplateAccessStream, ChatGrokBot.GrokBotsInboxPromptShownStore, ChatModels.PremiumSubscriptionTierStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatGrokBot.GrokBotAvailabilityWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
    ChatGrokBot.GrokBotTemplateAccessStream grokBotTemplateAccessStream;
    ChatModels.PremiumSubscriptionTierStream premiumSubscriptionTierStream;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotAvailabilityWorker_h */
