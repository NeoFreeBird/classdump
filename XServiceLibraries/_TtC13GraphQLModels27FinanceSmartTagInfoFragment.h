//
#ifndef _TtC13GraphQLModels27FinanceSmartTagInfoFragment_h
#define _TtC13GraphQLModels27FinanceSmartTagInfoFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.FinanceThemeOverride ?, GraphQLModels.MoneyFragment, Swift.Bool, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.FinanceSmartTagInfoFragment.TradablePlatforms, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceSmartTagInfoFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool active;
    Swift.String currency;
    Swift.String? logoUrl;
    Swift.String name;
    GraphQLModels.MoneyFragment price;
    nominal type descriptor for Swift.Int64 priceCents;
    Swift.Bool supportsOhlc;
    GraphQLModels.Enumeration GraphQLScalars.FinanceThemeOverride ? themeOverride;
    Swift.String ticker;
    Swift.Array -> GraphQLModels.FinanceSmartTagInfoFragment.TradablePlatforms tradablePlatforms;
    Swift.String? url;
}

@end

#endif /* _TtC13GraphQLModels27FinanceSmartTagInfoFragment_h */
