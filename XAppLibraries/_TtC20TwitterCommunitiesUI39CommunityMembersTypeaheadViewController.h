//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI39CommunityMembersTypeaheadViewController_h
#define _TtC20TwitterCommunitiesUI39CommunityMembersTypeaheadViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterCommunities.CommunityMembersDataSource, TwitterCommunities.MultiLoader _$sySSSa -> TwitterCommunities.CommunityMemberUserViewModel _$sGGSg, TwitterCommunitiesUI.CommunityMemberRowAdapter ?, TwitterCommunitiesUI.CommunityMembersTypeaheadViewControllerDelegate ?, TwitterCommunitiesUI.TypeaheadNoResultsView ?, _$sSo15TFNDataViewItemCSg, _$sSo24TFNActivityIndicatorItemCSg;

@interface TwitterCommunitiesUI.CommunityMembersTypeaheadViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityMembersDataSource membersDataSource;
    TwitterCommunitiesUI.CommunityMembersTypeaheadViewControllerDelegate ? delegate;
    TwitterCommunitiesUI.CommunityMemberRowAdapter ? $__lazy_storage_$_communityMemberRowAdapter;
    TwitterCommunities.MultiLoader  empty-list Swift.StringSwift.Array -> TwitterCommunities.CommunityMemberUserViewModel _$sGGSg $__lazy_storage_$_typeaheadLoader;
    __C.TFNDataViewItem? $__lazy_storage_$_inactiveItem;
    __C.TFNActivityIndicatorItem? $__lazy_storage_$_typeaheadLoadingItem;
    TwitterCommunitiesUI.TypeaheadNoResultsView ? $__lazy_storage_$_emptyStateView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI39CommunityMembersTypeaheadViewController_h */
