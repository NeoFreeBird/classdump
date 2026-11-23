//
#ifndef _TtC11ChatGraphQL23SaveBookingLinkMutation_h
#define _TtC11ChatGraphQL23SaveBookingLinkMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSa -> _$s13GraphQLModels26CalendarBookingWindowInputVMn, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.SaveBookingLinkMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? id;
    Swift.String title;
    nominal type descriptor for Swift.Int32 durationMin;
    Swift.String tz;
    Swift.Array -> nominal type descriptor for GraphQLModels.CalendarBookingWindowInput windows;
    Swift.Bool requirePin;
    nominal type descriptor for Swift.Int32 ? noticeMin;
    nominal type descriptor for Swift.Int32 ? horizonDays;
    Swift.Bool trustedOnly;
}

@end

#endif /* _TtC11ChatGraphQL23SaveBookingLinkMutation_h */
