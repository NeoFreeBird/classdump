//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports33SportsHubEventGamesViewController_h
#define _TtC7XSports33SportsHubEventGamesViewController_h
@import Foundation;

@class UIViewController, XDiffableCollection.DiffableView, XSports.SportsHubEventContext, XSports.SportsHubEventTabStore, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC;

@interface XSports.SportsHubEventGamesViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsHubEventContext context;
    XSports.SportsHubEventTabStore store;
    XDiffableCollection.DiffableView diffableView;
    __C.UILabel messageLabel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)handleRefresh;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports33SportsHubEventGamesViewController_h */
