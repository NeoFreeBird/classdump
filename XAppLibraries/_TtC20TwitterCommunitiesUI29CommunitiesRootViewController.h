//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI29CommunitiesRootViewController_h
#define _TtC20TwitterCommunitiesUI29CommunitiesRootViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, TwitterCommunities.CommunityCollectionModel ?, TwitterCommunitiesUI.CommunitiesHeaderViewController, TwitterCommunitiesUI.CommunitiesNavigation, TwitterCommunitiesUI.DataTableViewHeaderModuleController ?, _$sSo15UIBarButtonItemCSg, _$sSo21TFNDataViewControllerC;

@interface TwitterCommunitiesUI.CommunitiesRootViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNDataViewController contentViewController;
    TwitterCommunitiesUI.CommunitiesHeaderViewController communitiesHeaderViewController;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    TwitterCommunities.CommunityCollectionModel ? communityCollectionModel;
    TwitterCommunitiesUI.DataTableViewHeaderModuleController ? $__lazy_storage_$_dataViewHeaderController;
    Swift.Bool isPullToRefreshInProgress;
    __C.UIBarButtonItem? $__lazy_storage_$_searchCommunitiesBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_createCommunityBarButtonItem;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (_Bool)becomeFirstResponder;
- (void)didPullToRefresh;
- (void)didSelectSearchCommunities;
- (void)didSelectCreateCommunity;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribePage;
- (id)scribeSection;
- (_Bool)tui_showsActionButton;
- (_Bool)t1_showsDashAction;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI29CommunitiesRootViewController_h */
