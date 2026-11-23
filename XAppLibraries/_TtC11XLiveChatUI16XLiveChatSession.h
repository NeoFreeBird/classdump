//
#ifndef _TtC11XLiveChatUI16XLiveChatSession_h
#define _TtC11XLiveChatUI16XLiveChatSession_h
@import Foundation;

@class Swift.Bool, XLiveChat.LiveChatListenClient, XLiveChatUI.LiveChatEmojiKeywordProviding ?, XLiveChatUI.XLiveChatSessionDelegate ?, _$sSD -> _$ss11AnyHashableVMn _$sypGSg, _$sSDyS2SG, _$sSDySS XLiveChat.LiveChatMessage, _$sSDySS XLiveChat.LiveChatMessageReactions, _$sSDySS _$s14TFSTwitterCore11TwitterUserVMn, _$sSS, _$sSSSg, _$sSa -> XLiveChat.LiveChatMessage, _$sSa -> XLiveChat.LiveChatReactionEvent, _$sSa -> XLiveChatUI.XLiveChatSession.PendingSend, _$sSayySa -> XLiveChatUI.LiveChatReactionEmoji _$sGc, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sShySSG, _$sSi, _$sSo17TFNTwitterAccountC, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface XLiveChatUI.XLiveChatSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String broadcastID;
    __C.TFNTwitterAccount account;
    Swift.Bool isViewerBroadcaster;
    Swift.Double liveBatchInterval;
    Swift.Double hydratedLiveBatchInterval;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$sypGSg scribeParameters;
    XLiveChat.LiveChatListenClient client;
    nominal type descriptor for Swift.Int64 sessionID;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? liveTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? historyTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? liveFlushTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? catalogRetryTask;
    Swift.Array empty-list  empty-list Swift.Array -> XLiveChatUI.LiveChatReactionEmoji _$sGc catalogWaiters;
    Swift.Bool didScribeLoadSuccess;
    Swift.Array -> XLiveChat.LiveChatMessage pendingLiveMessages;
    Swift.Array -> XLiveChat.LiveChatReactionEvent pendingReactionEvents;
    Swift.Dictionary empty-list Swift.String XLiveChat.LiveChatMessageReactions reactionsByMessageID;
    Swift.Bool liveFlushScheduled;
    Swift.Int hydrationGeneration;
    XLiveChatUI.LiveChatEmojiKeywordProviding ? emojiKeywordProvider;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for TFSTwitterCore.TwitterUser userCache;
    Swift.Set<Swift.String> deliveredMessageIDs;
    Swift.Array -> XLiveChatUI.XLiveChatSession.PendingSend pendingSends;
    [Swift.String : Swift.String] serverTimestampsByEchoUUID;
    Swift.Set<Swift.String> unresolvedEchoUUIDs;
    Swift.Dictionary empty-list Swift.String XLiveChat.LiveChatMessage stagedViewerMessagesByCanonicalID;
    XLiveChatUI.XLiveChatSessionDelegate ? delegate;
    Swift.String? authorTag;
}

@end

#endif /* _TtC11XLiveChatUI16XLiveChatSession_h */
