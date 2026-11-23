//
#ifndef _TtC7XSports33SportsPlayerLeadersViewController_h
#define _TtC7XSports33SportsPlayerLeadersViewController_h
@import Foundation;

@class UIViewController, XSports.SportsPlayerLeadersListView, XSports.SportsPlayerLeadersRouter, XSports.SportsPlayerLeadersStore, _$s13XDesignSystem5InputCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface XSports.SportsPlayerLeadersViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsPlayerLeadersStore store;
    XSports.SportsPlayerLeadersRouter router;
    nominal type descriptor for XDesignSystem.Input search;
    XSports.SportsPlayerLeadersListView listView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports33SportsPlayerLeadersViewController_h */
