//
#ifndef _TtCCC11CallGraphQL30XChatJoinCallOperationResponse13XchatJoinCall4Call_h
#define _TtCCC11CallGraphQL30XChatJoinCallOperationResponse13XchatJoinCall4Call_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> CallGraphQL.XChatJoinCallOperationResponse.XchatJoinCall.Call.Participants, _TtCs12_SwiftObject;

@interface CallGraphQL.XChatJoinCallOperationResponse.XchatJoinCall.Call : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool audioOnly;
    Swift.String callId;
    Swift.String? conversationId;
    nominal type descriptor for GraphQLScalars.NumericString createdAtMs;
    nominal type descriptor for GraphQLScalars.NumericString hostUserId;
    Swift.Bool p2p;
    Swift.Array -> CallGraphQL.XChatJoinCallOperationResponse.XchatJoinCall.Call.Participants participants;
}

@end

#endif /* _TtCCC11CallGraphQL30XChatJoinCallOperationResponse13XchatJoinCall4Call_h */
