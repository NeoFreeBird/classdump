//
#ifndef _TtC14GraphQLActions23LinkGrokAccountMutation_h
#define _TtC14GraphQLActions23LinkGrokAccountMutation_h
@import Foundation;

@class GraphQLModels.LinkGrokAuthorizationCodeInput ?, GraphQLScalars.LinkGrokAccountMethod, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.LinkGrokAccountMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.LinkGrokAuthorizationCodeInput ? authorizationCode;
    Swift.String? linkToken;
    GraphQLScalars.LinkGrokAccountMethod method;
    Swift.String? oauthToken;
}

@end

#endif /* _TtC14GraphQLActions23LinkGrokAccountMutation_h */
