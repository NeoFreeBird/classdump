//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions33EnableTotpTwoFactorFinishMutation_h
#define _TtC14GraphQLActions33EnableTotpTwoFactorFinishMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.EnableTotpTwoFactorFinishMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String sessionToken;
    Swift.String code;
    Swift.String lvrID;
}

@end

#endif /* _TtC14GraphQLActions33EnableTotpTwoFactorFinishMutation_h */
