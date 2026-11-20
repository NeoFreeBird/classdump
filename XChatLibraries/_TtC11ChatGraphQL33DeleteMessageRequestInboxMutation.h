//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL33DeleteMessageRequestInboxMutation_h
#define _TtC11ChatGraphQL33DeleteMessageRequestInboxMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars23MessageRequestTypeInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.DeleteMessageRequestInboxMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.MessageRequestTypeInput inboxType;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput actionSignatures;
}

@end

#endif /* _TtC11ChatGraphQL33DeleteMessageRequestInboxMutation_h */
