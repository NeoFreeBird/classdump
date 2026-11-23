//
#ifndef _TtC14GraphQLActions21FinanceChartDataQuery_h
#define _TtC14GraphQLActions21FinanceChartDataQuery_h
@import Foundation;

@class GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.FinanceChartDataQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String assetSymbol;
    Swift.String timeframe;
    Swift.String? candleSize;
    Swift.String? currencyCode;
    GraphQLScalars.NumericString ? fromTimestampMs;
    GraphQLScalars.NumericString ? toTimestampMs;
}

@end

#endif /* _TtC14GraphQLActions21FinanceChartDataQuery_h */
