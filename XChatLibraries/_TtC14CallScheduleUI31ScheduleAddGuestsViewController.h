//
#ifndef _TtC14CallScheduleUI31ScheduleAddGuestsViewController_h
#define _TtC14CallScheduleUI31ScheduleAddGuestsViewController_h
@import Foundation;

@class CallModels.CallImageLoading, CallSchedule.ScheduleGuestSelectionStream, CallSchedule.ScheduledCallsRepositoryProtocol, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$sSa -> CallSchedule.ScheduledCallPerson, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.ScheduleAddGuestsViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    CallSchedule.ScheduledCallsRepositoryProtocol repository;
    CallSchedule.ScheduleGuestSelectionStream guestSelectionStream;
    CallModels.CallImageLoading imageLoader;
    nominal type descriptor for XDesignSystem.Input searchInput;
    nominal type descriptor for XDesignSystem.ListItems list;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never querySubject;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? searchTask;
    Swift.Array -> CallSchedule.ScheduledCallPerson results;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI31ScheduleAddGuestsViewController_h */
