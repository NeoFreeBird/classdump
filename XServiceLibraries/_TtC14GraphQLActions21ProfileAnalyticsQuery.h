//
#ifndef _TtC14GraphQLActions21ProfileAnalyticsQuery_h
#define _TtC14GraphQLActions21ProfileAnalyticsQuery_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSa -> GraphQLScalars.AnalyticsMetricTypeInput, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ProfileAnalyticsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString restID;
    Swift.Array -> GraphQLScalars.AnalyticsMetricTypeInput requestedMetrics;
    Swift.String toTime;
    Swift.String fromTime;
}

@end

#endif /* _TtC14GraphQLActions21ProfileAnalyticsQuery_h */
