//
#ifndef _TtC14GraphQLActions30FinishLoginPasskeyAuthMutation_h
#define _TtC14GraphQLActions30FinishLoginPasskeyAuthMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.FinishLoginPasskeyAuthMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String sessionToken;
    Swift.String challengeResponse;
    Swift.String castleToken;
}

@end

#endif /* _TtC14GraphQLActions30FinishLoginPasskeyAuthMutation_h */
