//
#ifndef _TtC7XSports35SportsHubEventBracketViewController_h
#define _TtC7XSports35SportsHubEventBracketViewController_h
@import Foundation;

@class UIViewController, XSports.SportsHubEventBracketState ?, XSports.SportsHubEventBracketView, XSports.SportsHubEventContext, XSports.SportsHubEventTabStore, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface XSports.SportsHubEventBracketViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsHubEventContext context;
    XSports.SportsHubEventTabStore store;
    XSports.SportsHubEventBracketView bracketView;
    __C.UIActivityIndicatorView activityIndicator;
    __C.UILabel messageLabel;
    XSports.SportsHubEventBracketState ? renderedState;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports35SportsHubEventBracketViewController_h */
