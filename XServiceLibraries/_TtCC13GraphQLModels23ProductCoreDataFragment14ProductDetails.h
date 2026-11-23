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
