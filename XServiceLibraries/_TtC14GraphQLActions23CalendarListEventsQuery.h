//
#ifndef _TtC14GraphQLActions23CalendarListEventsQuery_h
#define _TtC14GraphQLActions23CalendarListEventsQuery_h
@import Foundation;

@class GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarListEventsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions23CalendarListEventsQuery_h */
