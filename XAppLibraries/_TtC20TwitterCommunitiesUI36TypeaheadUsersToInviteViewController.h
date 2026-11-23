//
#ifndef _TtC20TwitterCommunitiesUI36TypeaheadUsersToInviteViewController_h
#define _TtC20TwitterCommunitiesUI36TypeaheadUsersToInviteViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterCommunities.InviteCoordinator, TwitterCommunities.TypeaheadUsersToInviteLoader ?, TwitterCommunitiesUI.TypeaheadNoResultsView ?, TwitterCommunitiesUI.TypeaheadUsersToInviteViewControllerDelegate ?, _$syXlSg;

@interface TwitterCommunitiesUI.TypeaheadUsersToInviteViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.InviteCoordinator inviteCoordinator;
    TwitterCommunitiesUI.TypeaheadUsersToInviteViewControllerDelegate ? delegate;
    TwitterCommunities.TypeaheadUsersToInviteLoader ? $__lazy_storage_$_typeaheadLoader;
    Swift.AnyObject? $__lazy_storage_$_inactiveItem;
    Swift.AnyObject? $__lazy_storage_$_typeaheadLoadingItem;
    TwitterCommunitiesUI.TypeaheadNoResultsView ? $__lazy_storage_$_emptyStateView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI36TypeaheadUsersToInviteViewController_h */
