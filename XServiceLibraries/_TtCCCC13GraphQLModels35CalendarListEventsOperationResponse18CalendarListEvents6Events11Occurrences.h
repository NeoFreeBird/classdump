//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences_h
#define _TtCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences_h
@import Foundation;

@class GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Organizer ?, GraphQLModels.Enumeration GraphQLScalars.CalendarEventStatus, GraphQLModels.Union GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind ?, GraphQLScalars.NumericString, Swift.Bool, _$sSSSg, _$sSa -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Attendees ?, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool allDay;
    Swift.Array -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Attendees ? attendees;
    Swift.String? description;
    nominal type descriptor for Swift.Int32 durationMin;
    GraphQLModels.Union GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind ? kind;
    GraphQLScalars.NumericString occurrenceStartMin;
    GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Organizer ? organizer;
    Swift.String? rrule;
    GraphQLScalars.NumericString startMin;
    GraphQLModels.Enumeration GraphQLScalars.CalendarEventStatus status;
    Swift.String? title;
    Swift.String? tz;
    Swift.String? viewerMetadata;
    nominal type descriptor for Swift.Int32 ? viewerNotifyBeforeMin;
}

@end

#endif /* _TtCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences_h */
