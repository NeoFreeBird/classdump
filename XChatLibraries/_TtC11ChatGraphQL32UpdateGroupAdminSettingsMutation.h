//
#ifndef _TtC11ChatGraphQL32UpdateGroupAdminSettingsMutation_h
#define _TtC11ChatGraphQL32UpdateGroupAdminSettingsMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.UpdateGroupAdminSettingsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationId;
    Swift.Bool? addMember;
    Swift.Bool? editGroupInfo;
    Swift.Bool? sendMessage;
    Swift.Bool? startCall;
    Swift.Bool? editMessageTtl;
    Swift.Bool? blockScreenCapture;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
}

@end

#endif /* _TtC11ChatGraphQL32UpdateGroupAdminSettingsMutation_h */
