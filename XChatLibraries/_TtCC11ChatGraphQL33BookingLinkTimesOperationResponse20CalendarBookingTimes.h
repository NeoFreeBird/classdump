//
#ifndef _TtCC11ChatGraphQL33BookingLinkTimesOperationResponse20CalendarBookingTimes_h
#define _TtCC11ChatGraphQL33BookingLinkTimesOperationResponse20CalendarBookingTimes_h
@import Foundation;

@class ChatGraphQL.BookingLinkOwnerFragment ?, ChatGraphQL.BookingLinkTimesOperationResponse.CalendarBookingTimes.ViewerBooking ?, Swift.Bool, _$sSS, _$sSa -> ChatGraphQL.BookingLinkTimesOperationResponse.CalendarBookingTimes.OwnerBookings, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _$ss5Int32VMn, _TtCs12_SwiftObject;

@interface ChatGraphQL.BookingLinkTimesOperationResponse.CalendarBookingTimes : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 durationMin;
    nominal type descriptor for Swift.Int32 horizonDays;
    ChatGraphQL.BookingLinkOwnerFragment ? owner;
    Swift.Array -> ChatGraphQL.BookingLinkTimesOperationResponse.CalendarBookingTimes.OwnerBookings ownerBookings;
    Swift.Bool pinRequired;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString startMins;
    Swift.String title;
    ChatGraphQL.BookingLinkTimesOperationResponse.CalendarBookingTimes.ViewerBooking ? viewerBooking;
}

@end

#endif /* _TtCC11ChatGraphQL33BookingLinkTimesOperationResponse20CalendarBookingTimes_h */
