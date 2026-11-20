//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions32CalendarSetEventReminderMutation_h
#define _TtC14GraphQLActions32CalendarSetEventReminderMutation_h
@import Foundation;

@class GraphQLScalars.CalendarEventScope, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$ss5Int32VMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarSetEventReminderMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString eventID;
    GraphQLScalars.NumericString ? occurrenceStartMin;
    GraphQLScalars.CalendarEventScope scope;
    nominal type descriptor for Swift.Int32 notifyBeforeMin;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions32CalendarSetEventReminderMutation_h */
