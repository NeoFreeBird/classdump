//
#ifndef _TtC14GraphQLActions32CalendarSetEventMetadataMutation_h
#define _TtC14GraphQLActions32CalendarSetEventMetadataMutation_h
@import Foundation;

@class GraphQLScalars.CalendarEventScope, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CalendarSetEventMetadataMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString eventID;
    GraphQLScalars.NumericString ? occurrenceStartMin;
    GraphQLScalars.CalendarEventScope scope;
    Swift.String? metadata;
    GraphQLScalars.NumericString ? fromMin;
    GraphQLScalars.NumericString ? toMin;
}

@end

#endif /* _TtC14GraphQLActions32CalendarSetEventMetadataMutation_h */
