//
#ifndef _TtC14GraphQLActions37UserStoreKit2PurchaseRedeemV2Mutation_h
#define _TtC14GraphQLActions37UserStoreKit2PurchaseRedeemV2Mutation_h
@import Foundation;

@class GraphQLModels.RedemptionMetadataInput ?, GraphQLScalars.InAppPurchaseAppleEnvInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserStoreKit2PurchaseRedeemV2Mutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.InAppPurchaseAppleEnvInput appleEnvironment;
    Swift.String bundleID;
    Swift.String? externalProductID;
    Swift.String jwsRepresentation;
    GraphQLModels.RedemptionMetadataInput ? redemptionMetadataInput;
    Swift.Bool includeSuperFollowRedemptionFields;
}

@end

#endif /* _TtC14GraphQLActions37UserStoreKit2PurchaseRedeemV2Mutation_h */
