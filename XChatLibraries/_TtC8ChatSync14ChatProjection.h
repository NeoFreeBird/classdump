//
#ifndef _TtC8ChatSync14ChatProjection_h
#define _TtC8ChatSync14ChatProjection_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatSQLiteDatabase, ChatKeys.ChatConversationKeyIndex, ChatModelsCore.UserID, ChatSync.ChatConversationSummaryBuilder, ChatSync.ChatGroupAvatarFiles, ChatSync.ChatGroupAvatarStream, ChatSync.ChatGroupMetadataRepairStream, ChatSync.ChatKeyRotationStream, ChatSync.ChatMessageFailureStream, ChatSync.ChatPendingMutationsStream, ChatSync.ChatProjectionReader, ChatSync.ChatSQLiteOutboxStore, ChatSync.ChatSQLiteProjectionStore, ChatSync.ChatTypingExpirationStream, ChatSyncState.ChatConversationMetadataStream, ChatSyncState.ChatInboxStream, ChatSyncState.ChatMessageRequestsStream, ChatSyncState.ChatMessageRequestsSummaryStream, ChatSyncState.ChatOngoingGroupCallsStream, ChatSyncState.ChatOutboxStream, ChatSyncState.ChatPinnedMessagesStream, ChatSyncState.ChatSelfUserStream, ChatSyncState.ChatTimelineStream, ChatSyncState.ChatTypingStream, ChatSyncState.ChatUserChangesStream, ChatSyncState.ChatVerifiedUsersStream, Swift.Bool, _$sSD -> ChatModelsCore.ConversationID ChatSync.ChatGroupAvatarRequest, _$sSD -> ChatModelsCore.ConversationID ChatSync.MessageRequestConversationToken, _$sSD -> ChatModelsCore.ConversationID ChatSync.TimelineWindow, _$sSD -> ChatModelsCore.ConversationID ChatSyncState.ChatConversationSummary, _$sSD -> ChatModelsCore.ConversationID ChatSyncState.ChatMessageRequest, _$sSD -> ChatModelsCore.ConversationID _$sSi, _$sSa -> ChatSync.PendingChanges, _$sSh -> ChatModelsCore.ConversationID, _$sSh -> ChatSync.ChatGroupAvatarRequest, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatProjection : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatModelsCore.UserID owner;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSync.ChatSQLiteProjectionStore store;
    ChatSync.ChatSQLiteOutboxStore outboxStore;
    ChatKeys.ChatConversationKeyIndex conversationKeyIndex;
    ChatSyncState.ChatInboxStream inboxStream;
    ChatSyncState.ChatConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatSelfUserStream selfUserStream;
    ChatSyncState.ChatVerifiedUsersStream verifiedUsersStream;
    ChatSyncState.ChatUserChangesStream userChangesStream;
    ChatSyncState.ChatTypingStream typingStream;
    ChatSync.ChatTypingExpirationStream typingExpirationStream;
    ChatSyncState.ChatTimelineStream timelineStream;
    ChatSyncState.ChatOutboxStream outboxStream;
    ChatSyncState.ChatMessageRequestsStream messageRequestsStream;
    ChatSyncState.ChatMessageRequestsSummaryStream messageRequestsSummaryStream;
    ChatSync.ChatKeyRotationStream keyRotationStream;
    ChatSync.ChatMessageFailureStream messageFailureStream;
    ChatSync.ChatGroupAvatarStream groupAvatarStream;
    ChatSync.ChatGroupMetadataRepairStream groupMetadataRepairStream;
    ChatSyncState.ChatOngoingGroupCallsStream ongoingGroupCallsStream;
    ChatSyncState.ChatPinnedMessagesStream pinnedMessagesStream;
    ChatSync.ChatPendingMutationsStream pendingMutationsStream;
    ChatSync.ChatGroupAvatarFiles groupAvatarFiles;
    ChatSync.ChatConversationSummaryBuilder summaryBuilder;
    ChatSync.ChatProjectionReader reader;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSyncState.ChatConversationSummary summaries;
    Swift.Dictionary -> ChatModelsCore.ConversationID Swift.Int unreadCounts;
    Swift.Int unreadCountHoldCount;
    Swift.Bool hasLoadedFromStore;
    Swift.Bool hasCompleteInboxSnapshot;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSyncState.ChatMessageRequest messageRequests;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSync.MessageRequestConversationToken messageRequestConversationTokens;
    Swift.Int messageRequestsSummaryWriteCount;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSync.TimelineWindow timelineWindows;
    Swift.Set -> ChatModelsCore.ConversationID reloadingTimelineIDs;
    Swift.Array -> ChatSync.PendingChanges pendingChanges;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSync.ChatGroupAvatarRequest pendingGroupAvatarRequests;
    Swift.Set -> ChatSync.ChatGroupAvatarRequest failedGroupAvatarRequests;
}

@end

#endif /* _TtC8ChatSync14ChatProjection_h */
