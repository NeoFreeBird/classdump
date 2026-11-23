//
#ifndef _TtC20TwitterCommunitiesUI35CommunitySpamSettingsViewController_h
#define _TtC20TwitterCommunitiesUI35CommunitySpamSettingsViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesNavigation, _$s14TFSTwitterCore33TwitterCommunitySpamFilterSettingOMn, _$sSo15TFNDataViewItemCSg, _$syXlSg;

@interface TwitterCommunitiesUI.CommunitySpamSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    Swift.AnyObject? communityModelObserver;
    TwitterCommunities.CommunityModel communityModel;
    nominal type descriptor for TFSTwitterCore.TwitterCommunitySpamFilterSetting updatedSpamFilterSetting;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    Swift.Bool isReloadingCommunityModel;
    Swift.AnyObject? $__lazy_storage_$_communityDetailsHeaderItem;
    Swift.AnyObject? $__lazy_storage_$_autoReportHeaderItem;
    __C.TFNDataViewItem? $__lazy_storage_$_spamDetectorSettingTFNItem;
    __C.TFNDataViewItem? $__lazy_storage_$_hideUntilReviewSettingTFNItem;
}

/* instance methods */
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI35CommunitySpamSettingsViewController_h */
