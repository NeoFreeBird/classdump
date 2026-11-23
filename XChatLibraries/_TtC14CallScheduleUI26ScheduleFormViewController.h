//
#ifndef _TtC14CallScheduleUI26ScheduleFormViewController_h
#define _TtC14CallScheduleUI26ScheduleFormViewController_h
@import Foundation;

@class CallModels.CallImageLoading, CallSchedule.ScheduleGuestSelectionStream, CallSchedule.ScheduleSlotProvider, CallScheduleUI.ScheduleDisplayFormatter, CallScheduleUI.ScheduleFormState, CallScheduleUI.ScheduleFormSubmitter, CallScheduleUI.ScheduleRecurrenceButton ?, CallScheduleUI.ScheduleTokenLabel, CallScheduleUI.ScheduledCallColorButton ?, Swift.Bool, _$s10Foundation8CalendarVMn, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.ScheduleFormViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    CallScheduleUI.ScheduleFormSubmitter submitter;
    CallSchedule.ScheduleGuestSelectionStream guestSelectionStream;
    CallModels.CallImageLoading imageLoader;
    nominal type descriptor for Foundation.Calendar calendar;
    CallSchedule.ScheduleSlotProvider slotProvider;
    CallScheduleUI.ScheduleDisplayFormatter formatter;
    nominal type descriptor for XDesignSystem.Input titleInput;
    CallScheduleUI.ScheduleTokenLabel whenLabel;
    nominal type descriptor for XDesignSystem.ListItems guestList;
    nominal type descriptor for XDesignSystem.ListItems descriptionList;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    CallScheduleUI.ScheduleFormState initialState;
    CallScheduleUI.ScheduleFormState state;
    Swift.Bool isSubmitting;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? footnoteView;
    CallScheduleUI.ScheduledCallColorButton ? $__lazy_storage_$_colorButton;
    CallScheduleUI.ScheduleRecurrenceButton ? $__lazy_storage_$_recurrenceButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI26ScheduleFormViewController_h */
