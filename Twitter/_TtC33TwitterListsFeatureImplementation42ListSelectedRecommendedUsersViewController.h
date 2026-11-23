//
#ifndef _TtC33TwitterListsFeatureImplementation42ListSelectedRecommendedUsersViewController_h
#define _TtC33TwitterListsFeatureImplementation42ListSelectedRecommendedUsersViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterListsFeatureImplementation.ListSelectedRecommendedUsersViewControllerDelegate ?, TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager, _$sSSSg, _$sSa -> _$s14TFSTwitterCore0A13UserReferenceCMn, _$sSa -> _$ss5Int64VMn, _$sSo17TFNTwitterAccountC;

@interface TwitterListsFeatureImplementation.ListSelectedRecommendedUsersViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager stateManager;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference selectedUsers;
    Swift.String? cachedUrtTimelineUID;
    Swift.Array -> nominal type descriptor for Swift.Int64 cachedUserIDs;
    TwitterListsFeatureImplementation.ListSelectedRecommendedUsersViewControllerDelegate ? delegate;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC33TwitterListsFeatureImplementation42ListSelectedRecommendedUsersViewController_h */
