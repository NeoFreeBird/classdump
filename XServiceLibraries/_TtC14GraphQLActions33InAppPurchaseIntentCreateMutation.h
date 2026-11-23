//
#ifndef _TtC14GraphQLActions33InAppPurchaseIntentCreateMutation_h
#define _TtC14GraphQLActions33InAppPurchaseIntentCreateMutation_h
@import Foundation;

@class GraphQLModels.InAppPurchaseIntentInput, GraphQLScalars.InAppPurchaseProductCategoryInput ?, GraphQLScalars.InAppPurchaseProductEnvironmentInput, GraphQLScalars.InAppPurchaseProductPlatformInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.InAppPurchaseIntentCreateMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.InAppPurchaseProductEnvironmentInput environment;
    GraphQLScalars.InAppPurchaseProductPlatformInput platform;
    GraphQLScalars.InAppPurchaseProductCategoryInput ? productCategory;
    GraphQLModels.InAppPurchaseIntentInput purchaseIntent;
}

@end

#endif /* _TtC14GraphQLActions33InAppPurchaseIntentCreateMutation_h */
