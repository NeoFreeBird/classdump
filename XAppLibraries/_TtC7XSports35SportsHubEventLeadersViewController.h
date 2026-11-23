//
#ifndef _TtC7XSports35SportsHubEventLeadersViewController_h
#define _TtC7XSports35SportsHubEventLeadersViewController_h
@import Foundation;

@class UIViewController, XDiffableCollection.DiffableView, XSports.SportsHubEventContext, XSports.SportsHubEventTabStore, XSportsGraphQL.SportsHubEventTabOperationResponse.SportsHubEventTab.Content.SportsHubLeaders ?, _$s10TFNUISwift11ShimmerViewCMn ?, _$s12CoreGraphics7CGFloatVMn ?, _$sSaySo6UIViewCG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsHubEventLeadersViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsHubEventContext context;
    XSports.SportsHubEventTabStore store;
    XDiffableCollection.DiffableView diffableView;
    __C.UILabel messageLabel;
    __C.UIView skeletonView;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_loadingView;
    [__C.UIView] skeletonShapes;
    XSportsGraphQL.SportsHubEventTabOperationResponse.SportsHubEventTab.Content.SportsHubLeaders ? leaders;
    nominal type descriptor for CoreGraphics.CGFloat ? renderedWidth;
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

#endif /* _TtC7XSports35SportsHubEventLeadersViewController_h */
