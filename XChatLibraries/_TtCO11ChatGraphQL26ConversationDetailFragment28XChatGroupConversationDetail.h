//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO11ChatGraphQL26ConversationDetailFragment28XChatGroupConversationDetail_h
#define _TtCO11ChatGraphQL26ConversationDetailFragment28XChatGroupConversationDetail_h
@import Foundation;

@class ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupMetadata ?, ChatGraphQL.XChatUserResultsFragment ?, _$sSSSg, _$sSa -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupAdminsResults ?, _$sSa -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupMembersResults ?, _$sSa -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupRemovedUsersResults ?, _$sSa -> ChatGraphQL.XChatUserResultsFragment ?, _$sSbSg, _TtCs12_SwiftObject;

@interface ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? conversationId;
    Swift.Array -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupAdminsResults ? groupAdminsResults;
    ChatGraphQL.XChatUserResultsFragment ? groupCreatedByUserResults;
    Swift.Array -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupMembersResults ? groupMembersResults;
    ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupMetadata ? groupMetadata;
    Swift.Array -> ChatGraphQL.ConversationDetailFragment.XChatGroupConversationDetail.GroupRemovedUsersResults ? groupRemovedUsersResults;
    Swift.Bool? isArchived;
    Swift.Bool? isMuted;
    Swift.String? latestGroupTitleChangeMessageEvent;
    Swift.Array -> ChatGraphQL.XChatUserResultsFragment ? participantsResults;
}

@end

#endif /* _TtCO11ChatGraphQL26ConversationDetailFragment28XChatGroupConversationDetail_h */
