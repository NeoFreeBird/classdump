//
#ifndef _TtC13GraphQLModels20FinanceQuoteFragment_h
#define _TtC13GraphQLModels20FinanceQuoteFragment_h
@import Foundation;

@class GraphQLModels.MoneyFragment, GraphQLModels.MoneyFragment ?, _$sSd, _$sSdSg, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceQuoteFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 asOfTimestampMs;
    Swift.Double? change1hPercent;
    Swift.Double change24hPercent;
    Swift.Double? change7dPercent;
    GraphQLModels.MoneyFragment ? high;
    GraphQLModels.MoneyFragment ? low;
    GraphQLModels.MoneyFragment marketCap;
    GraphQLModels.MoneyFragment ? open;
    GraphQLModels.MoneyFragment price;
    Swift.Double? volume24h;
}

@end

#endif /* _TtC13GraphQLModels20FinanceQuoteFragment_h */
