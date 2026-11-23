//
#ifndef _TtC14CallScheduleUI30BookingLinkHoursViewController_h
#define _TtC14CallScheduleUI30BookingLinkHoursViewController_h
@import Foundation;

@class CallScheduleUI.BookingLinkDayHoursBuilder, CallScheduleUI.BookingLinkDisplayFormatter, CallScheduleUI.BookingLinkFormStream, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.BookingLinkHoursViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinkFormStream bookingLinkFormStream;
    CallScheduleUI.BookingLinkDayHoursBuilder dayHoursBuilder;
    Swift.String? displayedNote;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? footnoteView;
    CallScheduleUI.BookingLinkDisplayFormatter formatter;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC14CallScheduleUI30BookingLinkHoursViewController_h */
