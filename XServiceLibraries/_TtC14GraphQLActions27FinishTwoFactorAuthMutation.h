//
#ifndef _TtC14GraphQLActions27FinishTwoFactorAuthMutation_h
#define _TtC14GraphQLActions27FinishTwoFactorAuthMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.FinishTwoFactorAuthMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String sessionToken;
    Swift.String challengeResponse;
}

@end

#endif /* _TtC14GraphQLActions27FinishTwoFactorAuthMutation_h */
