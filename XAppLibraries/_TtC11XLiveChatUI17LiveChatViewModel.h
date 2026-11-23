//
#ifndef _TtC11XLiveChatUI17LiveChatViewModel_h
#define _TtC11XLiveChatUI17LiveChatViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, XLiveChatUI.LiveChatAuthorTagCoordinator, XLiveChatUI.LiveChatAuthorViewModelProviding, XLiveChatUI.LiveChatCellViewModelProtocol _$scSg ->, XLiveChatUI.LiveChatFeatures, XLiveChatUI.LiveChatFrequentEmojis ?, XLiveChatUI.LiveChatProviding, XLiveChatUI.LiveChatStore, XLiveChatUI.LiveChatStore ?, XLiveChatUI.LiveChatViewControllerError _$scSg ->, XLiveChatUI.LiveChatViewControllerViewModelItem ?, XLiveChatUI.LiveChatViewModel.ConnectionStatus, XLiveChatUI.LiveChatViewModelDelegate ?, XLiveChatUI.TXXXFrame ?, _$s10Foundation4DateVMn ?, _$s14TFSTwitterCore16TwitterBroadcastCMn, _$sSDySS XLiveChat.LiveChatMessageReactions, _$sSDySSSiG, _$sSSSg, _$sSa -> XLiveChatUI.LiveChatReportOption, _$sSa -> XLiveChatUI.LiveChatSystemMessageViewModel, _$sScTyyt _$ss5NeverOMn ?, _$sShySSGSg, _$sSi, _$sSo16TAVPlaybackStateCSg, _$sSo17TFNTwitterAccountC, _$sySScSg, _$sySaySSGcSg, _$sySo18TFSActiveTextRange_pcSg, _$sySo6UIViewCcSg, _$syycSg;

@interface XLiveChatUI.LiveChatViewModel : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterBroadcast broadcast;
    __C.TFNTwitterAccount account;
    Swift.Bool showsMessagesWithoutPlayback;
    XLiveChatUI.LiveChatProviding provider;
    XLiveChatUI.LiveChatAuthorViewModelProviding authorProvider;
    XLiveChatUI.LiveChatFeatures features;
    Swift.Int presentOccupancy;
    Swift.Array -> XLiveChatUI.LiveChatSystemMessageViewModel systemMessageItems;
    __C.TAVPlaybackState? lastObservedPlaybackState;
    XLiveChatUI.TXXXFrame ? lastObservedTXXXFrame;
    XLiveChatUI.LiveChatStore chatStore;
    XLiveChatUI.LiveChatStore ? liveMessagesChatStore;
    nominal type descriptor for Foundation.Date ? lastObservedItemIdentifiersLimitDate;
    nominal type descriptor for Foundation.Date ? itemIdentifiersNextExpectedLimitDate;
    Swift.Set<Swift.String>? mutedMessageIDs;
    Swift.Dictionary empty-list Swift.String XLiveChat.LiveChatMessageReactions reactionsByMessageID;
    [Swift.String : Swift.Int] reactionRequestIDs;
    Swift.Int nextReactionRequestID;
    Swift.Array -> XLiveChatUI.LiveChatReportOption reportReasons;
    Swift.Bool didRequestReportReasons;
    Swift.Bool didDetectBroadcastEnded;
    Swift.Bool lastNotifiedHasMessages;
    XLiveChatUI.LiveChatAuthorTagCoordinator authorTagCoordinator;
    XLiveChatUI.LiveChatFrequentEmojis ? frequentReactionStore;
    XLiveChatUI.LiveChatFrequentEmojis ? frequentQuickSendStore;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? shimmerScribeTask;
    Swift.Bool loadHistoryOnConnected;
    Swift.String? enabledPlaceholderOverride;
    Swift.String? complatPlanNameForXPremium;
    (() -> ())? authorTagStateDidChangeBlock;
    (() -> ())? didUpdateHasMessagesBlock;
    XLiveChatUI.LiveChatViewModelDelegate ? delegate;
    XLiveChatUI.LiveChatViewModel.ConnectionStatus connectionStatus;
    XLiveChatUI.LiveChatCellViewModelProtocol _$scSg -> chatMessageAuthorTapHandler;
    ((__C.TFSActiveTextRange) -> ())? chatMessageMentionTapHandler;
    ((__C.UIView) -> ())? subscribeUpsellTapHandler;
    (() -> ())? premiumUpsellTapHandler;
    (() -> ())? premiumUpsellImpressionHandler;
    (() -> ())? canSendUpdateBlock;
    (([Swift.String]) -> ())? updateBlock;
    ((Swift.String) -> ())? reconfigureItemBlock;
    ((Swift.String) -> ())? reloadItemBlock;
    (() -> ())? didSendMessageBlock;
    (() -> ())? didUpdateIsConnectingOrLoadingBlock;
    XLiveChatUI.LiveChatViewControllerError _$scSg -> encounterErrorBlock;
    XLiveChatUI.LiveChatViewControllerViewModelItem ? replyTarget;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC11XLiveChatUI17LiveChatViewModel_h */
