//
#ifndef _TtC14CallScheduleUI25BookingLinkViewController_h
#define _TtC14CallScheduleUI25BookingLinkViewController_h
@import Foundation;

@class CallModels.CallBookingLink, CallModels.CallToastPresenting, CallScheduleUI.BookingLinkDeleteSubmitter, CallScheduleUI.BookingLinkFormBuilder, CallScheduleUI.BookingLinkSharing, _$s13XDesignSystem29TrayListContentViewControllerCN;

@interface CallScheduleUI.BookingLinkViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinkFormBuilder bookingLinkFormBuilder;
    CallScheduleUI.BookingLinkDeleteSubmitter deleteSubmitter;
    CallModels.CallBookingLink link;
    CallModels.CallBookingLink function type (escaping) onPINCreated;
    CallScheduleUI.BookingLinkSharing sharing;
    CallModels.CallToastPresenting toastPresenter;
}

/* instance methods */

@end

#endif /* _TtC14CallScheduleUI25BookingLinkViewController_h */
