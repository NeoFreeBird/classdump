//
#ifndef _TtC11ChatGrokBot17GrokBotUsageStore_h
#define _TtC11ChatGrokBot17GrokBotUsageStore_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotUsageMeter ?, ChatGrokBot.GrokBotUsageStore.ExhaustionBaseline, ChatUtilities.UnfairLock, GrokBotRelay.BotUsageResult ?, GrokBotRelay.GrokBotRepository ?, Swift.Bool, _$s10Foundation4DateVMn ?, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotUsageMeter ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn GrokBotRelay.BotUsageResult ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySbSg _$ss5NeverOMn, _$sSbSg, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotUsageStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never hidesPaidFeaturesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isExhaustedSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool? nominal type descriptor for Swift.Never lacksComputerSubject;
    nominal type descriptor for Combine.CurrentValueSubject GrokBotRelay.BotUsageResult ? nominal type descriptor for Swift.Never lastResultSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never limitHitsSubject;
    ChatUtilities.UnfairLock lock;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotUsageMeter ? nominal type descriptor for Swift.Never meterSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never restorationsSubject;
    Swift.Bool exhausted;
    ChatGrokBot.GrokBotUsageStore.ExhaustionBaseline exhaustionBaseline;
    Swift.Bool isHidingPaidFeatures;
    Swift.Bool? isLackingComputer;
    Swift.Bool isQueuedRefreshLifting;
    Swift.Bool isRefreshQueued;
    nominal type descriptor for Foundation.Date ? lastReadDate;
    ChatGrokBot.GrokBotUsageMeter ? latestMeter;
    GrokBotRelay.BotUsageResult ? latestResult;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? refreshTask;
    GrokBotRelay.GrokBotRepository ? repository;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11ChatGrokBot17GrokBotUsageStore_h */
