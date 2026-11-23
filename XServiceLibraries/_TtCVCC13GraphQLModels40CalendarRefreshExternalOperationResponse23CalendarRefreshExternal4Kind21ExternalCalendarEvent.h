//
#ifndef _TtCVCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal4Kind21ExternalCalendarEvent_h
#define _TtCVCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal4Kind21ExternalCalendarEvent_h
@import Foundation;

@class GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Organizer ?, GraphQLModels.Enumeration GraphQLScalars.ConferenceType, GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarEventType ?, GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarProvider, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Attachments, _$sSa -> GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Attendees, _TtCs12_SwiftObject;

@interface GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Attachments attachments;
    Swift.Array -> GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Attendees attendees;
    Swift.String? conferenceLabel;
    GraphQLModels.Enumeration GraphQLScalars.ConferenceType conferenceType;
    GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarEventType ? eventType;
    Swift.String externalId;
    Swift.String? htmlLink;
    Swift.String? joinUri;
    Swift.String? location;
    GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind.ExternalCalendarEvent.Organizer ? organizer;
    GraphQLModels.Enumeration GraphQLScalars.ExternalCalendarProvider provider;
}

@end

#endif /* _TtCVCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal4Kind21ExternalCalendarEvent_h */
