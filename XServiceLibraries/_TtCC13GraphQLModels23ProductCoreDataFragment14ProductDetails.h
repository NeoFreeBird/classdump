//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13GraphQLModels23ProductCoreDataFragment14ProductDetails_h
#define _TtCC13GraphQLModels23ProductCoreDataFragment14ProductDetails_h
@import Foundation;

@class GraphQLModels.ApiMediaFragment, GraphQLModels.ApiShortenedUrlFragment, GraphQLModels.ApiShortenedUrlFragment ?, GraphQLModels.Enumeration GraphQLScalars.ProductAvailability, GraphQLModels.PriceFragment, GraphQLModels.ProductCoreDataFragment.ProductDetails.CustomFields ?, GraphQLModels.ProductCoreDataFragment.ProductDetails.ProductSale ?, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.ApiMediaFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ProductCoreDataFragment.ProductDetails : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.ApiMediaFragment ? additionalMedia;
    GraphQLModels.Enumeration GraphQLScalars.ProductAvailability availability;
    GraphQLModels.ApiMediaFragment coverMedia;
    GraphQLModels.ProductCoreDataFragment.ProductDetails.CustomFields ? customFields;
    Swift.String? description;
    GraphQLModels.ApiShortenedUrlFragment externalUrl;
    GraphQLModels.ApiShortenedUrlFragment ? mobileUrl;
    GraphQLModels.PriceFragment price;
    GraphQLModels.ProductCoreDataFragment.ProductDetails.ProductSale ? productSale;
    Swift.String title;
}

@end

#endif /* _TtCC13GraphQLModels23ProductCoreDataFragment14ProductDetails_h */
