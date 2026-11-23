//
#ifndef _TtC14CallScheduleUI29BookingLinkFormViewController_h
#define _TtC14CallScheduleUI29BookingLinkFormViewController_h
@import Foundation;

@class CallEngine.CallScribing, CallModels.CallToastPresenting, CallScheduleUI.BookingLinkChipsView, CallScheduleUI.BookingLinkDisplayFormatter, CallScheduleUI.BookingLinkFormState, CallScheduleUI.BookingLinkFormStream, CallScheduleUI.BookingLinkFormWorkerPluginPoint, CallScheduleUI.BookingLinkHoursBuilder, CallScheduleUI.ScheduleFieldRowView ?, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$sSS, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.BookingLinkFormViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    CallScheduleUI.BookingLinkFormStream bookingLinkFormStream;
    CallEngine.CallScribing callScriber;
    Swift.String? displayedNote;
    CallScheduleUI.BookingLinkChipsView durationChips;
    CallScheduleUI.ScheduleFieldRowView ? $__lazy_storage_$_durationRow;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? footnoteView;
    CallScheduleUI.BookingLinkDisplayFormatter formatter;
    CallScheduleUI.BookingLinkHoursBuilder hoursBuilder;
    nominal type descriptor for XDesignSystem.ListItems hoursList;
    nominal type descriptor for XDesignSystem.Input nameInput;
    CallModels.CallBookingLink function type (escaping) onSaved;
    CallScheduleUI.BookingLinkFormState state;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    nominal type descriptor for XDesignSystem.ListItems togglesList;
    CallModels.CallToastPresenting toastPresenter;
    CallScheduleUI.BookingLinkFormWorkerPluginPoint workerPluginPoint;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI29BookingLinkFormViewController_h */
