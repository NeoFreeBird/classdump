//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL25EnableGroupInviteMutation_h
#define _TtC11ChatGraphQL25EnableGroupInviteMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.EnableGroupInviteMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationID;
    nominal type descriptor for GraphQLScalars.NumericString ? durationMsec;
    nominal type descriptor for GraphQLScalars.NumericString ? affiliateUserID;
    Swift.String? welcomeMessage;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
    Swift.String inviteURL;
    nominal type descriptor for GraphQLScalars.NumericString ? validityExpiryTimestampMsec;
    Swift.String? decryptedTitle;
    Swift.String? decryptedAvatarURL;
}

@end

#endif /* _TtC11ChatGraphQL25EnableGroupInviteMutation_h */
