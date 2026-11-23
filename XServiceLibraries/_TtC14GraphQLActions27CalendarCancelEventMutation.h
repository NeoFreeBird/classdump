//
#ifndef _TtC14GraphQLActions27CalendarCancelEventMutation_h
#define _TtC14GraphQLActions27CalendarCancelEventMutation_h
@import Foundation;

@class GraphQLScalars.CalendarEventScope, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarCancelEventMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString eventID;
    GraphQLScalars.NumericString ? occurrenceStartMin;
    GraphQLScalars.CalendarEventScope scope;
    Swift.Bool? emailGuests;
}

@end

#endif /* _TtC14GraphQLActions27CalendarCancelEventMutation_h */
