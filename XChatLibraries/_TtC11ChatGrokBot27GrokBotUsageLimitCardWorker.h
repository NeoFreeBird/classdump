//
#ifndef _TtC11ChatGrokBot27GrokBotUsageLimitCardWorker_h
#define _TtC11ChatGrokBot27GrokBotUsageLimitCardWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotUsageLimitCardOwner, ChatGrokBot.GrokBotUsageLimitCardStream, ChatGrokUpsell.PremiumUpsellNavigation, _$s11XFoundation13CombineWorkerCN, _$s7Combine12AnyPublisherVMn GrokBotRelay.GrokBotTurnFailure ? _$ss5NeverOMn;

@interface ChatGrokBot.GrokBotUsageLimitCardWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotSession grokBotSession;
    nominal type descriptor for Combine.AnyPublisher GrokBotRelay.GrokBotTurnFailure ? nominal type descriptor for Swift.Never limitCardFailure;
    ChatGrokBot.GrokBotUsageLimitCardOwner owner;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatGrokBot.GrokBotUsageLimitCardStream usageLimitCardStream;
}

@end

#endif /* _TtC11ChatGrokBot27GrokBotUsageLimitCardWorker_h */
