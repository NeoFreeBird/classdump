//
#ifndef _TtC14GraphQLActions33GenerateAppStoreSignatureMutation_h
#define _TtC14GraphQLActions33GenerateAppStoreSignatureMutation_h
@import Foundation;

@class GraphQLScalars.InAppPurchaseAppleAppleSignatureTypeInput, GraphQLScalars.InAppPurchaseAppleEnvInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLModels.AppStoreClientSignatureContentItemsInput, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.GenerateAppStoreSignatureMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.InAppPurchaseAppleEnvInput appleEnvironment;
    GraphQLScalars.InAppPurchaseAppleAppleSignatureTypeInput signatureType;
    Swift.Array -> GraphQLModels.AppStoreClientSignatureContentItemsInput clientSignatureContentItems;
}

@end

#endif /* _TtC14GraphQLActions33GenerateAppStoreSignatureMutation_h */
