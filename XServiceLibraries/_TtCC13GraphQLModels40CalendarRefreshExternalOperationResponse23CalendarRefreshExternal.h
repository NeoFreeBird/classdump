//
#ifndef _TtCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal_h
#define _TtCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.CalendarEventStatus, GraphQLModels.Union GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind ?, GraphQLScalars.NumericString, Swift.Bool, _$sSSSg, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool allDay;
    Swift.String? description;
    nominal type descriptor for Swift.Int32 durationMin;
    GraphQLModels.Union GraphQLModels.CalendarRefreshExternalOperationResponse.CalendarRefreshExternal.Kind ? kind;
    GraphQLScalars.NumericString occurrenceStartMin;
    Swift.String? rrule;
    GraphQLScalars.NumericString startMin;
    GraphQLModels.Enumeration GraphQLScalars.CalendarEventStatus status;
    Swift.String? title;
    Swift.String? tz;
    Swift.String? viewerMetadata;
    nominal type descriptor for Swift.Int32 ? viewerNotifyBeforeMin;
}

@end

#endif /* _TtCC13GraphQLModels40CalendarRefreshExternalOperationResponse23CalendarRefreshExternal_h */
