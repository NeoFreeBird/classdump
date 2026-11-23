//
#ifndef _TtC14GraphQLActions27CalendarUpdateEventMutation_h
#define _TtC14GraphQLActions27CalendarUpdateEventMutation_h
@import Foundation;

@class GraphQLModels.CalendarEventPatchInput ?, GraphQLScalars.CalendarEventScope, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarUpdateEventMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString eventID;
    GraphQLScalars.NumericString ? occurrenceStartMin;
    GraphQLScalars.CalendarEventScope scope;
    GraphQLModels.CalendarEventPatchInput ? event;
    Swift.Bool? emailGuests;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions27CalendarUpdateEventMutation_h */
