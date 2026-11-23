//
#ifndef _TtC11XLiveChatUI17XLiveChatProvider_h
#define _TtC11XLiveChatUI17XLiveChatProvider_h
@import Foundation;

@class Swift.Bool, XLiveChatUI.LiveChatEmojiKeywordProviding ?, XLiveChatUI.LiveChatProviderDelegate ?, XLiveChatUI.XLiveChatProvider.HistoryState, XLiveChatUI.XLiveChatSession ?, XLiveChatUI.XLiveChatWriteEligibility, _$s10Foundation4DateVMn ?, _$s14TFSTwitterCore16TwitterBroadcastCMn, _$sSD -> _$ss11AnyHashableVMn _$sypGSg, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sShySSG, _$sSi, _$sSo17TFNTwitterAccountC, _TtCs12_SwiftObject;

@interface XLiveChatUI.XLiveChatProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterBroadcast broadcast;
    __C.TFNTwitterAccount account;
    Swift.Double liveBatchInterval;
    Swift.Bool isPerformanceImprovements1Enabled;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$sypGSg scribeParameters;
    XLiveChatUI.LiveChatEmojiKeywordProviding ? emojiKeywordProvider;
    XLiveChatUI.XLiveChatSession ? session;
    XLiveChatUI.XLiveChatProvider.HistoryState historyState;
    Swift.Bool isConnected;
    XLiveChatUI.XLiveChatWriteEligibility writeEligibility;
    Swift.Int eligibilityRefreshGeneration;
    Swift.Set<Swift.String> carriedDeliveredMessageIDs;
    Swift.Int chatRegistrationRetriesRemaining;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? chatRegistrationRetryTask;
    Swift.String? authorTag;
    nominal type descriptor for Foundation.Date ? latestLiveMessageDate;
    Swift.Bool supportsReactions;
    XLiveChatUI.LiveChatProviderDelegate ? delegate;
}

@end

#endif /* _TtC11XLiveChatUI17XLiveChatProvider_h */
