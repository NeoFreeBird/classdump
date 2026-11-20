//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync30NativeChatConversationProvider_h
#define _TtC8ChatSync30NativeChatConversationProvider_h
@import Foundation;

@class ChatKeys.XChatConversationKeyIndex, ChatModelsCore.ConversationID, ChatSync.ChatGroupJoinRequestsStream, ChatSync.XChatMessageReadTimestampsFetcher, ChatSync.XChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatConversationMetadataStream, ChatSyncState.ChatHistoryStream, ChatSyncState.ChatInboxStream, ChatSyncState.ChatOngoingGroupCallsStream, ChatSyncState.ChatOutboxStream, ChatSyncState.ChatPinnedMessagesStream, ChatSyncState.ChatTimelineStream, ChatSyncState.ChatTypingStream, _$s7Combine14AnyCancellableCMn, _$s7Combine19CurrentValueSubjectCMn ChatSyncState.XChatTimelineWindow ? _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSync.NativeChatConversationProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatSyncState.ChatActionStream actionStream;
    ChatKeys.XChatConversationKeyIndex conversationKeyIndex;
    ChatSyncState.ChatConversationMetadataStream conversationMetadataStream;
    ChatSync.ChatGroupJoinRequestsStream groupJoinRequestsStream;
    ChatSyncState.ChatHistoryStream historyStream;
    ChatSyncState.ChatInboxStream inboxStream;
    ChatSync.XChatMessageReadTimestampsFetcher messageReadTimestampsFetcher;
    ChatSyncState.ChatOngoingGroupCallsStream ongoingGroupCallsStream;
    ChatSyncState.ChatOutboxStream outboxStream;
    ChatSyncState.ChatPinnedMessagesStream pinnedMessagesStream;
    ChatSync.XChatProjection projection;
    ChatSyncState.ChatTimelineStream timelineStream;
    ChatSyncState.ChatTypingStream typingStream;
    nominal type descriptor for Combine.CurrentValueSubject ChatSyncState.XChatTimelineWindow ? nominal type descriptor for Swift.Never timelineWindowSubject;
    nominal type descriptor for Combine.AnyCancellable timelineWindowConnection;
}

@end

#endif /* _TtC8ChatSync30NativeChatConversationProvider_h */
