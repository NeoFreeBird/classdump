//
#ifndef _TtC11ChatGrokBot19GrokBotsStateWorker_h
#define _TtC11ChatGrokBot19GrokBotsStateWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsAccountLinkStream, ChatGrokBot.GrokBotsDestinationStream, ChatGrokBot.GrokBotsPrimaryBotCreationStream, ChatGrokBot.GrokBotsStateStream, ChatModels.PremiumSubscriptionTierStream, _$s11XFoundation13CombineWorkerCN, _$sShySSG;

@interface ChatGrokBot.GrokBotsStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotsAccountLinkStream accountLinkStream;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotsPrimaryBotCreationStream creationStream;
    ChatGrokBot.GrokBotsDestinationStream destinationStream;
    ChatModels.PremiumSubscriptionTierStream premiumSubscriptionTierStream;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotsStateStream stateStream;
    Swift.Set<Swift.String> shownAgentIDs;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotsStateWorker_h */
