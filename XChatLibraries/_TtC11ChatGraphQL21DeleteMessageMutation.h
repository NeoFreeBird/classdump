//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL21DeleteMessageMutation_h
#define _TtC11ChatGraphQL21DeleteMessageMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars24DeleteMessageActionInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _$sSaySSGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.DeleteMessageMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String]? sequenceIDs;
    Swift.String? conversationID;
    nominal type descriptor for GraphQLScalars.DeleteMessageActionInput ? deleteMessageAction;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
}

@end

#endif /* _TtC11ChatGraphQL21DeleteMessageMutation_h */
