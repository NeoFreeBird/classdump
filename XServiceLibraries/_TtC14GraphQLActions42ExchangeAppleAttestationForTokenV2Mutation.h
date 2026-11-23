//
#ifndef _TtC14GraphQLActions42ExchangeAppleAttestationForTokenV2Mutation_h
#define _TtC14GraphQLActions42ExchangeAppleAttestationForTokenV2Mutation_h
@import Foundation;

@class GraphQLScalars.AttestationEnvironmentInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ExchangeAppleAttestationForTokenV2Mutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String keyID;
    Swift.String clientData;
    Swift.String signedHash;
    GraphQLScalars.AttestationEnvironmentInput attestationEnvironment;
}

@end

#endif /* _TtC14GraphQLActions42ExchangeAppleAttestationForTokenV2Mutation_h */
