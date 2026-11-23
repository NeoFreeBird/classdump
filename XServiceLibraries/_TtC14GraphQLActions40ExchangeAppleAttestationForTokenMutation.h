//
#ifndef _TtC14GraphQLActions40ExchangeAppleAttestationForTokenMutation_h
#define _TtC14GraphQLActions40ExchangeAppleAttestationForTokenMutation_h
@import Foundation;

@class GraphQLScalars.AttestationEnvironmentInput, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ExchangeAppleAttestationForTokenMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    Swift.String keyID;
    Swift.String nonce;
    Swift.String signedHash;
    GraphQLScalars.AttestationEnvironmentInput attestationEnvironment;
}

@end

#endif /* _TtC14GraphQLActions40ExchangeAppleAttestationForTokenMutation_h */
