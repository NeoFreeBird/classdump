//
#ifndef _TtC20TwitterCommunitiesUI31CommunitySettingsViewController_h
#define _TtC20TwitterCommunitiesUI31CommunitySettingsViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesNavigation, _$sSo15TFNDataViewItemCSg, _$syXlSg;

@interface TwitterCommunitiesUI.CommunitySettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    Swift.AnyObject? communityModelObserver;
    TwitterCommunities.CommunityModel communityModel;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    Swift.Bool isReloadingCommunityModel;
    Swift.AnyObject? $__lazy_storage_$_communityDetailsHeaderItem;
    Swift.AnyObject? $__lazy_storage_$_membershipSettingsHeaderItem;
    __C.TFNDataViewItem? $__lazy_storage_$_adultContentSettingTFNItem;
}

/* instance methods */
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI31CommunitySettingsViewController_h */
