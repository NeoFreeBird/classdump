//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
