//
#ifndef _TtC14GraphQLActions25CalendarRsvpEventMutation_h
#define _TtC14GraphQLActions25CalendarRsvpEventMutation_h
@import Foundation;

@class GraphQLScalars.CalendarEventScope, GraphQLScalars.CalendarRsvpStatus, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarRsvpEventMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString eventID;
    GraphQLScalars.NumericString ? occurrenceStartMin;
    GraphQLScalars.CalendarEventScope scope;
    GraphQLScalars.CalendarRsvpStatus status;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions25CalendarRsvpEventMutation_h */
