//
#ifndef _TtC11ChatGraphQL17DmUnblockMutation_h
#define _TtC11ChatGraphQL17DmUnblockMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.DmUnblockMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString recipientIDs;
    Swift.Bool includeUserPublicKeys;
    Swift.Bool includeUsernameChange;
    Swift.Bool includeJuiceboxTokens;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC11ChatGraphQL17DmUnblockMutation_h */
