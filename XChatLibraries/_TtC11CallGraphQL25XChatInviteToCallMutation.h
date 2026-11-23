//
#ifndef _TtC11CallGraphQL25XChatInviteToCallMutation_h
#define _TtC11CallGraphQL25XChatInviteToCallMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface CallGraphQL.XChatInviteToCallMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String callID;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString userIDs;
}

@end

#endif /* _TtC11CallGraphQL25XChatInviteToCallMutation_h */
