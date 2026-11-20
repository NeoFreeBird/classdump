//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions26BeginTwoFactorAuthMutation_h
#define _TtC14GraphQLActions26BeginTwoFactorAuthMutation_h
@import Foundation;

@class GraphQLScalars.NumericString ?, GraphQLScalars.OnboardTwoFactorAuthMethodTypeEnumInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.BeginTwoFactorAuthMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String sessionToken;
    GraphQLScalars.OnboardTwoFactorAuthMethodTypeEnumInput ? twoFactorAuthMethodType;
    GraphQLScalars.NumericString ? userID;
    Swift.String? preludeDispatchID;
}

@end

#endif /* _TtC14GraphQLActions26BeginTwoFactorAuthMutation_h */
