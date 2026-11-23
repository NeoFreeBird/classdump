//
#ifndef _TtC11ChatGraphQL29UnarchiveConversationMutation_h
#define _TtC11ChatGraphQL29UnarchiveConversationMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.UnarchiveConversationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationId;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
}

@end

#endif /* _TtC11ChatGraphQL29UnarchiveConversationMutation_h */
