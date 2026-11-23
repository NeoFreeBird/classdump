//
#ifndef _TtCCC13GraphQLModels26ProductCatalogItemFragment22ManagedPlatformProduct6Prices_h
#define _TtCCC13GraphQLModels26ProductCatalogItemFragment22ManagedPlatformProduct6Prices_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.ChargeInterval ?, GraphQLModels.Enumeration GraphQLScalars.PriceType, GraphQLModels.Enumeration GraphQLScalars.WebSubscriptionsCurrencyCode, GraphQLModels.ProductCatalogItemFragment.ManagedPlatformProduct.Prices.Metadata, _$sSS, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GraphQLModels.ProductCatalogItemFragment.ManagedPlatformProduct.Prices : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 amountLocalMicro;
    GraphQLModels.Enumeration GraphQLScalars.ChargeInterval ? chargeInterval;
    GraphQLModels.Enumeration GraphQLScalars.WebSubscriptionsCurrencyCode currencyCode;
    Swift.String externalPriceId;
    GraphQLModels.ProductCatalogItemFragment.ManagedPlatformProduct.Prices.Metadata metadata;
    GraphQLModels.Enumeration GraphQLScalars.PriceType priceType;
}

@end

#endif /* _TtCCC13GraphQLModels26ProductCatalogItemFragment22ManagedPlatformProduct6Prices_h */
