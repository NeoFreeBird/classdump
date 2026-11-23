//
#ifndef _TtC14GraphQLActions29CalendarScheduleEventMutation_h
#define _TtC14GraphQLActions29CalendarScheduleEventMutation_h
@import Foundation;

@class GraphQLModels.CalendarEventInput ?, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarScheduleEventMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.CalendarEventInput ? event;
    Swift.Bool? emailGuests;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions29CalendarScheduleEventMutation_h */
