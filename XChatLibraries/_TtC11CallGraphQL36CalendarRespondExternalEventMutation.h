//
#ifndef _TtC11CallGraphQL36CalendarRespondExternalEventMutation_h
#define _TtC11CallGraphQL36CalendarRespondExternalEventMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars18CalendarRsvpStatusOMn, _$s14GraphQLScalars24ExternalCalendarProviderOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface CallGraphQL.CalendarRespondExternalEventMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.ExternalCalendarProvider provider;
    Swift.String externalID;
    nominal type descriptor for GraphQLScalars.CalendarRsvpStatus status;
    Swift.Bool allOccurrences;
}

@end

#endif /* _TtC11CallGraphQL36CalendarRespondExternalEventMutation_h */
