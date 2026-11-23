//
#ifndef _TtC14GraphQLActions19ProductCatalogQuery_h
#define _TtC14GraphQLActions19ProductCatalogQuery_h
@import Foundation;

@class GraphQLScalars.InAppPurchaseProductCategoryInput ?, GraphQLScalars.InAppPurchaseProductEnvironmentInput ?, GraphQLScalars.InAppPurchaseProductPlatformInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ProductCatalogQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.InAppPurchaseProductCategoryInput ? category;
    GraphQLScalars.InAppPurchaseProductEnvironmentInput ? environment;
    GraphQLScalars.InAppPurchaseProductPlatformInput platform;
    Swift.String? requestedCountryCode;
}

@end

#endif /* _TtC14GraphQLActions19ProductCatalogQuery_h */
