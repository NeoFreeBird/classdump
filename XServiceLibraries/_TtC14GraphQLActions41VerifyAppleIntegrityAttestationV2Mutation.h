//
#ifndef _TtC14GraphQLActions41VerifyAppleIntegrityAttestationV2Mutation_h
#define _TtC14GraphQLActions41VerifyAppleIntegrityAttestationV2Mutation_h
@import Foundation;

@class GraphQLScalars.AttestationEnvironmentInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.VerifyAppleIntegrityAttestationV2Mutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String attestationObject;
    Swift.String clientData;
    Swift.String signedClientDataHash;
    Swift.String signedDeviceIDHash;
    Swift.String keyID;
    GraphQLScalars.AttestationEnvironmentInput attestationEnvironment;
}

@end

#endif /* _TtC14GraphQLActions41VerifyAppleIntegrityAttestationV2Mutation_h */
