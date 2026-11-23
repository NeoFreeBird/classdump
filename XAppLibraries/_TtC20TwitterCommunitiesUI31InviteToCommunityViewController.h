//
#ifndef _TtC20TwitterCommunitiesUI31InviteToCommunityViewController_h
#define _TtC20TwitterCommunitiesUI31InviteToCommunityViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class TFNViewController, TwitterCommunities.InviteCoordinator, TwitterCommunitiesUI.CommunitiesNavigation, TwitterCommunitiesUI.SuggestedUsersToInviteViewController ?, TwitterCommunitiesUI.TypeaheadUsersToInviteViewController ?, _$sSo19TFNSearchControllerCSg;

@interface TwitterCommunitiesUI.InviteToCommunityViewController : TFNViewController <UISearchResultsUpdating, UISearchBarDelegate> { // (Swift)
    /* instance variables */
    TwitterCommunities.InviteCoordinator inviteCoordinator;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    TwitterCommunitiesUI.SuggestedUsersToInviteViewController ? $__lazy_storage_$_suggestedInvitesViewController;
    __C.TFNSearchController? $__lazy_storage_$_searchController;
    TwitterCommunitiesUI.TypeaheadUsersToInviteViewController ? $__lazy_storage_$_typeaheadResultsController;
}

/* instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarCancelButtonClicked:(id)clicked;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)controller;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI31InviteToCommunityViewController_h */
