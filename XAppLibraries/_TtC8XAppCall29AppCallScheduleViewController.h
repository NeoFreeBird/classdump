//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8XAppCall29AppCallScheduleViewController_h
#define _TtC8XAppCall29AppCallScheduleViewController_h
@import Foundation;

@class UIViewController, _$s14CallScheduleUI21CallsTabSegmentStreamCMn, _$s14CallScheduleUI22CallsTabViewControllerCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface XAppCall.AppCallScheduleViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for CallScheduleUI.CallsTabViewController callsTabViewController;
    nominal type descriptor for CallScheduleUI.CallsTabSegmentStream callsTabSegmentStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (_Bool)t1_showsDashAction;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (id)tui_buttonItemForCategory:(unsigned long long)category;
- (void)didTapJumpToDate;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC8XAppCall29AppCallScheduleViewController_h */
