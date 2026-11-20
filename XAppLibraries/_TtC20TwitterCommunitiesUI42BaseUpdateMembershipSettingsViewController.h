//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI42BaseUpdateMembershipSettingsViewController_h
#define _TtC20TwitterCommunitiesUI42BaseUpdateMembershipSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterCommunitiesUI.UpdateCommunityMembershipSettingsViewModel, _$sSo15UIBarButtonItemCSg;

@interface TwitterCommunitiesUI.BaseUpdateMembershipSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.UpdateCommunityMembershipSettingsViewModel viewModel;
    __C.UIBarButtonItem? $__lazy_storage_$_cancelBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_saveBarButtonItem;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)didSelectSave;
- (void)didSelectCancel;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI42BaseUpdateMembershipSettingsViewController_h */
