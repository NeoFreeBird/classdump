//
#ifndef _TtC20TwitterCommunitiesUI33CommunityAdminToolsViewController_h
#define _TtC20TwitterCommunitiesUI33CommunityAdminToolsViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesPresentation, TwitterCommunitiesUI.CommunityAdminToolsViewController.AdminToolsSection, _$syXlSg;

@interface TwitterCommunitiesUI.CommunityAdminToolsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    Swift.AnyObject? communityModelObserver;
    TwitterCommunities.CommunityModel communityModel;
    TwitterCommunitiesUI.CommunitiesPresentation navigation;
    Swift.Bool isReloadingCommunityModel;
    TwitterCommunitiesUI.CommunityAdminToolsViewController.AdminToolsSection needsReviewSection;
    TwitterCommunitiesUI.CommunityAdminToolsViewController.AdminToolsSection managementSection;
    TwitterCommunitiesUI.CommunityAdminToolsViewController.AdminToolsSection renounceModeratorRoleSection;
    TwitterCommunitiesUI.CommunityAdminToolsViewController.AdminToolsSection communitySpotlightSection;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI33CommunityAdminToolsViewController_h */
