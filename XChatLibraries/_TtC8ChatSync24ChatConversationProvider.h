//
#ifndef _TtC8ChatSync24ChatConversationProvider_h
#define _TtC8ChatSync24ChatConversationProvider_h
@import Foundation;

@class ChatKeys.ChatConversationKeyIndex, ChatModelsCore.ConversationID, ChatModelsCore.UserID, ChatSync.ChatGroupJoinRequestsStream, ChatSync.ChatMessageReadTimestampsFetcher, ChatSync.ChatNewConversationCheck, ChatSync.ChatProjection, ChatSync.ChatUsernameChangeWarningDismissalStore, ChatSyncState.ChatActionStream, ChatSyncState.ChatConversationMetadataStream, ChatSyncState.ChatHistoryStream, ChatSyncState.ChatInboxStream, ChatSyncState.ChatOngoingGroupCallsStream, ChatSyncState.ChatOutboxStream, ChatSyncState.ChatPinnedMessagesStream, ChatSyncState.ChatTimelineStream, ChatSyncState.ChatTypingStream, ChatSyncState.ChatUsernameChangeWarningCopyStream, _$s7Combine14AnyCancellableCMn, _$s7Combine19CurrentValueSubjectCMn ChatSyncState.ChatTimelineWindow ? _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSync.ChatConversationProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatSyncState.ChatActionStream actionStream;
    ChatKeys.ChatConversationKeyIndex conversationKeyIndex;
    ChatSyncState.ChatConversationMetadataStream conversationMetadataStream;
    ChatSync.ChatGroupJoinRequestsStream groupJoinRequestsStream;
    ChatSyncState.ChatHistoryStream historyStream;
    ChatSyncState.ChatInboxStream inboxStream;
    ChatSync.ChatMessageReadTimestampsFetcher messageReadTimestampsFetcher;
    ChatSync.ChatNewConversationCheck newConversationCheck;
    ChatSyncState.ChatOngoingGroupCallsStream ongoingGroupCallsStream;
    ChatSyncState.ChatOutboxStream outboxStream;
    ChatModelsCore.UserID owner;
    ChatSyncState.ChatPinnedMessagesStream pinnedMessagesStream;
    ChatSync.ChatProjection projection;
    ChatSyncState.ChatTimelineStream timelineStream;
    ChatSyncState.ChatTypingStream typingStream;
    ChatSyncState.ChatUsernameChangeWarningCopyStream usernameChangeWarningCopyStream;
    ChatSync.ChatUsernameChangeWarningDismissalStore usernameChangeWarningDismissalStore;
    nominal type descriptor for Combine.CurrentValueSubject ChatSyncState.ChatTimelineWindow ? nominal type descriptor for Swift.Never timelineWindowSubject;
    nominal type descriptor for Combine.AnyCancellable timelineWindowConnection;
}

@end

#endif /* _TtC8ChatSync24ChatConversationProvider_h */
