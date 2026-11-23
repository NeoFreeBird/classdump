//
#ifndef _TtC14GraphQLActions30FinishPalmVerificationMutation_h
#define _TtC14GraphQLActions30FinishPalmVerificationMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.FinishPalmVerificationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String nonce;
    Swift.Bool palmPassed;
    Swift.String? token;
}

@end

#endif /* _TtC14GraphQLActions30FinishPalmVerificationMutation_h */
