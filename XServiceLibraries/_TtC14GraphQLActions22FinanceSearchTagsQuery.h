//
#ifndef _TtC14GraphQLActions22FinanceSearchTagsQuery_h
#define _TtC14GraphQLActions22FinanceSearchTagsQuery_h
@import Foundation;

@class GraphQLModels.FinanceAssetFilterInput ?, GraphQLModels.FinancePageCursorInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.FinanceSearchTagsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String query;
    nominal type descriptor for Swift.Int64 ? pageSize;
    GraphQLModels.FinancePageCursorInput ? cursor;
    GraphQLModels.FinanceAssetFilterInput ? filter;
    Swift.String? currencyCode;
}

@end

#endif /* _TtC14GraphQLActions22FinanceSearchTagsQuery_h */
