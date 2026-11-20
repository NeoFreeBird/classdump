//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCOCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences4Kind21ExternalCalendarEvent_h
#define _TtCOCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences4Kind21ExternalCalendarEvent_h
@import Foundation;

@class GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Organizer ?, GraphQLModels.Enumeration GraphQLScalars.ConferenceType, GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarEventType ?, GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarProvider, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Attachments, _$sSa -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Attendees, _TtCs12_SwiftObject;

@interface GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Attachments attachments;
    Swift.Array -> GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Attendees attendees;
    Swift.String? conferenceLabel;
    GraphQLModels.Enumeration GraphQLScalars.ConferenceType conferenceType;
    GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarEventType ? eventType;
    Swift.String externalId;
    Swift.String? htmlLink;
    Swift.String? joinUri;
    Swift.String? location;
    GraphQLModels.CalendarListEventsOperationResponse.CalendarListEvents.Events.Occurrences.Kind.ExternalCalendarEvent.Organizer ? organizer;
    GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarProvider provider;
}

@end

#endif /* _TtCOCCCC13GraphQLModels35CalendarListEventsOperationResponse18CalendarListEvents6Events11Occurrences4Kind21ExternalCalendarEvent_h */
