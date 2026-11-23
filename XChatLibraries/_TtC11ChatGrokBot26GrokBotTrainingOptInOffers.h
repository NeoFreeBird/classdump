//
#ifndef _TtC11ChatGrokBot26GrokBotTrainingOptInOffers_h
#define _TtC11ChatGrokBot26GrokBotTrainingOptInOffers_h
@import Foundation;

@class ChatGrokBot.GrokBotTrainingOptInEligibility ?, ChatGrokBot.GrokBotTrainingOptInOffers.Phase, ChatGrokBot.GrokBotTrainingOptInOffers.SeenRecord, ChatGrokBot.GrokBotTrainingOptInPeriod ?, ChatUtilities.ChatAccountUserDefaulting, ChatUtilities.UnfairLock, Swift.Bool, _$sSSSg, _$sScT -> ChatGrokBot.GrokBotTrainingOptInEligibility _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotTrainingOptInOffers : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    ChatUtilities.UnfairLock lock;
    ChatGrokBot.GrokBotTrainingOptInPeriod ? askedLimitsPeriod;
    Swift.Task -> ChatGrokBot.GrokBotTrainingOptInEligibility nominal type descriptor for Swift.Never ? eligibilityRequest;
    Swift.String? identity;
    Swift.Bool isOneTimeAskSpent;
    Swift.Bool isOptedIn;
    ChatGrokBot.GrokBotTrainingOptInOffers.Phase phase;
    ChatGrokBot.GrokBotTrainingOptInOffers.SeenRecord seenRecord;
    ChatGrokBot.GrokBotTrainingOptInEligibility ? storedEligibility;
}

@end

#endif /* _TtC11ChatGrokBot26GrokBotTrainingOptInOffers_h */
