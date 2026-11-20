//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCC11CallGraphQL33XChatCallHistoryOperationResponse16XchatCallHistory5Calls_h
#define _TtCCC11CallGraphQL33XChatCallHistoryOperationResponse16XchatCallHistory5Calls_h
@import Foundation;

@class CallGraphQL.XChatCallHistoryOperationResponse.XchatCallHistory.Calls.Caller ?, Swift.Bool, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars16XChatCallOutcomeOMn, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> CallGraphQL.XChatCallHistoryOperationResponse.XchatCallHistory.Calls.Participants, _TtCs12_SwiftObject;

@interface CallGraphQL.XChatCallHistoryOperationResponse.XchatCallHistory.Calls : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool audioOnly;
    Swift.String callId;
    CallGraphQL.XChatCallHistoryOperationResponse.XchatCallHistory.Calls.Caller ? caller;
    Swift.String? conversationId;
    nominal type descriptor for GraphQLScalars.NumericString endedAtMs;
    Swift.Array -> CallGraphQL.XChatCallHistoryOperationResponse.XchatCallHistory.Calls.Participants participants;
    nominal type descriptor for GraphQLScalars.NumericString startedAtMs;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XChatCallOutcome viewerOutcome;
}

@end

#endif /* _TtCCC11CallGraphQL33XChatCallHistoryOperationResponse16XchatCallHistory5Calls_h */
