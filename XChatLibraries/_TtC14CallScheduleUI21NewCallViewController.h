//
#ifndef _TtC14CallScheduleUI21NewCallViewController_h
#define _TtC14CallScheduleUI21NewCallViewController_h
@import Foundation;

@class CallEngine.CallActionTriggerStream, CallEngine.CallScribing, CallModels.CallToastPresenting, CallSchedule.CallLinkBuilder, CallSchedule.ScheduledCallJoinRequestFactory, CallScheduleUI.BookingLinksBuilder, CallScheduleUI.ScheduleFormBuilder, Swift.Bool, _$s10Foundation4UUIDVMn ?, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSS, _$syyc;

@interface CallScheduleUI.NewCallViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    CallScheduleUI.BookingLinksBuilder bookingLinksBuilder;
    CallEngine.CallActionTriggerStream callActionTriggerStream;
    CallSchedule.CallLinkBuilder callLinkBuilder;
    CallEngine.CallScribing callScriber;
    Swift.Bool isBookingLinksAvailable;
    CallSchedule.ScheduledCallJoinRequestFactory joinRequestFactory;
    CallScheduleUI.ScheduleFormBuilder scheduleFormBuilder;
    CallModels.CallToastPresenting toastPresenter;
    () -> () onScheduled;
    nominal type descriptor for Foundation.UUID ? pendingCallLinkRequestID;
}

/* instance methods */

@end

#endif /* _TtC14CallScheduleUI21NewCallViewController_h */
