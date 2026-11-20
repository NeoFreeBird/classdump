//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL23RemoveFromGroupMutation_h
#define _TtC11ChatGraphQL23RemoveFromGroupMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels30XChatGroupKeyRotationDataInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.RemoveFromGroupMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationID;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString userIDs;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
    nominal type descriptor for GraphQLModels.XChatGroupKeyRotationDataInput ? groupKeyRotationData;
}

@end

#endif /* _TtC11ChatGraphQL23RemoveFromGroupMutation_h */
