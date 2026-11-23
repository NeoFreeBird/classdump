//
#ifndef _TtC14CallScheduleUI33BookingLinkDayHoursViewController_h
#define _TtC14CallScheduleUI33BookingLinkDayHoursViewController_h
@import Foundation;

@class CallModels.CallBookingWeekday, CallScheduleUI.BookingLinkDisplayFormatter, CallScheduleUI.BookingLinkFormState, CallScheduleUI.BookingLinkFormStream, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSa -> CallScheduleUI.BookingLinkTimeRangeView, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.BookingLinkDayHoursViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.ListItems actionsList;
    nominal type descriptor for XDesignSystem.ListItems availabilityList;
    CallScheduleUI.BookingLinkFormStream bookingLinkFormStream;
    CallScheduleUI.BookingLinkDisplayFormatter formatter;
    Swift.Array -> CallScheduleUI.BookingLinkTimeRangeView rangeViews;
    CallScheduleUI.BookingLinkFormState state;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    CallModels.CallBookingWeekday weekday;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI33BookingLinkDayHoursViewController_h */
