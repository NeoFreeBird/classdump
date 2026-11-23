//
#ifndef _TtC20TwitterCommunitiesUI54CommunityNotificationSettingsTrayContentViewController_h
#define _TtC20TwitterCommunitiesUI54CommunityNotificationSettingsTrayContentViewController_h
@import Foundation;

@class Swift.Bool, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s14TFSTwitterCore36TwitterCommunityNotificationSettingsVMn _$s_ -> _$ss6ResultOMn TwitterCommunities.CommunityNotificationSettingsPutResult _$ss5ErrorMp _$sGctc ->, _$sSa -> _$s14TFSTwitterCore36TwitterCommunityNotificationSettingsV0E4TypeOMn, _$syycSg;

@interface TwitterCommunitiesUI.CommunityNotificationSettingsTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onSaved;
    (() -> ())? onSaveFailed;
    Swift.Bool isPrimaryActionLoading;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterCommunityNotificationSettings.NotificationType notificationTypes;
    nominal type descriptor for TFSTwitterCore.TwitterCommunityNotificationSettings  first-element-marker  -> nominal type descriptor for Swift.Result TwitterCommunities.CommunityNotificationSettingsPutResult protocol descriptor for Swift.Error _$sGctc -> saveSettings;
}

/* instance methods */

@end

#endif /* _TtC20TwitterCommunitiesUI54CommunityNotificationSettingsTrayContentViewController_h */
