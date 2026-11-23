//
#ifndef _TtC14CallScheduleUI26BookingLinksViewController_h
#define _TtC14CallScheduleUI26BookingLinksViewController_h
@import Foundation;

@class CallEngine.CallScribing, CallModels.BookingLinksRepositoryProtocol, CallScheduleUI.BookingLinkBuilder, CallScheduleUI.BookingLinkCreatedBuilder, CallScheduleUI.BookingLinkDisplayFormatter, CallScheduleUI.BookingLinkFormBuilder, CallScheduleUI.BookingLinksStatusView, CallScheduleUI.BookingLinksStream, CallScheduleUI.BookingLinksWorkerPluginPoint, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSS, _$sSa -> CallModels.CallBookingLink ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.BookingLinksViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    CallScheduleUI.BookingLinkBuilder bookingLinkBuilder;
    CallScheduleUI.BookingLinkCreatedBuilder bookingLinkCreatedBuilder;
    CallScheduleUI.BookingLinkFormBuilder bookingLinkFormBuilder;
    CallModels.BookingLinksRepositoryProtocol bookingLinksRepository;
    CallScheduleUI.BookingLinksStream bookingLinksStream;
    CallEngine.CallScribing callScriber;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? capNoteView;
    CallScheduleUI.BookingLinkDisplayFormatter formatter;
    Swift.Array -> CallModels.CallBookingLink ? links;
    nominal type descriptor for XDesignSystem.ListItems linksList;
    CallScheduleUI.BookingLinksStatusView statusView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    CallScheduleUI.BookingLinksWorkerPluginPoint workerPluginPoint;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI26BookingLinksViewController_h */
