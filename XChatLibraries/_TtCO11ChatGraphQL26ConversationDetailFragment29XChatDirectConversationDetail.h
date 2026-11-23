//
#ifndef _TtCO11ChatGraphQL26ConversationDetailFragment29XChatDirectConversationDetail_h
#define _TtCO11ChatGraphQL26ConversationDetailFragment29XChatDirectConversationDetail_h
@import Foundation;

@class _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSa -> ChatGraphQL.XChatUserResultsFragment ?, _$sSbSg, _TtCs12_SwiftObject;

@interface ChatGraphQL.ConversationDetailFragment.XChatDirectConversationDetail : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? conversationId;
    Swift.Bool? isArchived;
    Swift.Bool? isGrokEnabled;
    Swift.Bool? isMuted;
    nominal type descriptor for GraphQLScalars.NumericString ? messageTtlMsec;
    Swift.Array -> ChatGraphQL.XChatUserResultsFragment ? participantsResults;
    Swift.Bool? screenCaptureBlockingEnabled;
}

@end

#endif /* _TtCO11ChatGraphQL26ConversationDetailFragment29XChatDirectConversationDetail_h */
