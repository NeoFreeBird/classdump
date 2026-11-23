//
#ifndef _TtC14GraphQLActions33StartIdentityVerificationMutation_h
#define _TtC14GraphQLActions33StartIdentityVerificationMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.StartIdentityVerificationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? verificationFlow;
    Swift.String? successURL;
}

@end

#endif /* _TtC14GraphQLActions33StartIdentityVerificationMutation_h */
