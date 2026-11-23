//
#ifndef _TtC33TwitterListsFeatureImplementation34ListRecommendedUsersViewController_h
#define _TtC33TwitterListsFeatureImplementation34ListRecommendedUsersViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"
#include "UISearchControllerDelegate-Protocol.h"

@class TFNViewController, TwitterListsFeatureImplementation.ListSearchRecommendedUsersHostViewController ?, TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController ?, TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager, _$s12CoreGraphics7CGFloatVMn, _$s12TwitterLists034ListRecommendedUsersViewControllerF5ModelVMn, _$s12TwitterLists12ListFeaturesCMn, _$s12TwitterLists39ListRecommendedUsersViewControllerStyleOMn, _$s12TwitterLists42ListRecommendedUsersViewControllerDelegateMp ?, _$s14T1TwitterSwift17URTViewControllerCMn, _$sSo11UIStackViewCSg, _$sSo17TFNTwitterAccountC, _$sSo18UISearchControllerCSg, _$sSo23TFSTwitterScribeContextC;

@interface TwitterListsFeatureImplementation.ListRecommendedUsersViewController : TFNViewController <UISearchControllerDelegate, UISearchBarDelegate> { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterLists.ListRecommendedUsersViewControllerDelegate ? delegate;
    __C.TFNTwitterAccount account;
    nominal type descriptor for T1TwitterSwift.URTViewController contentViewController;
    TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager stateManager;
    __C.TFSTwitterScribeContext scribeContext;
    nominal type descriptor for TwitterLists.ListRecommendedUsersViewControllerViewModel viewModel;
    nominal type descriptor for TwitterLists.ListRecommendedUsersViewControllerStyle style;
    nominal type descriptor for CoreGraphics.CGFloat additionalSearchResultsTopInset;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
    TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController ? $__lazy_storage_$_summaryViewController;
    __C.UIStackView? $__lazy_storage_$_contentStackView;
    TwitterListsFeatureImplementation.ListSearchRecommendedUsersHostViewController ? $__lazy_storage_$_searchResultsController;
    __C.UISearchController? $__lazy_storage_$_searchController;
}

@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) _Bool shouldAutorotate;

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)willPresentSearchController:(id)controller;
- (void)didDismissSearchController:(id)controller;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarCancelButtonClicked:(id)clicked;
- (long long)positionForBar:(id)bar;
- (_Bool)t1_showsExpandedSearchBox;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC33TwitterListsFeatureImplementation34ListRecommendedUsersViewController_h */
