//
#ifndef _TtC16ChatConversation22MessageListItemBuilder_h
#define _TtC16ChatConversation22MessageListItemBuilder_h
@import Foundation;

@class ChatConversation.InfoListItemBuilder, ChatConversation.MessageBookingLinkBuilder, ChatModelsCore.ConversationID, ChatModelsCore.UserID, ChatSyncState.ChatContentProviding ?, _$sSdSg, _$sSi, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface ChatConversation.MessageListItemBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkBuilder bookingLinkBuilder;
    ChatSyncState.ChatContentProviding ? contentProvider;
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.InfoListItemBuilder infoListItemBuilder;
    nominal type descriptor for Swift.Int64 maxMessagePreviewSize;
    Swift.Int maximumGroupSizeForLiveReadReceipts;
    Swift.Double? messageGroupingWindow;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC16ChatConversation22MessageListItemBuilder_h */
