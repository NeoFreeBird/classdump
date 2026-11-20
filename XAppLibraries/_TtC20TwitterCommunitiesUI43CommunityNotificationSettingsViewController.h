//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI43CommunityNotificationSettingsViewController_h
#define _TtC20TwitterCommunitiesUI43CommunityNotificationSettingsViewController_h
@import Foundation;

#include "TFNMenuSheetActionAdapterDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, TFNItemsDataViewController, TwitterCommunities.CommunityModel, _$sSD -> _$s14TFSTwitterCore36TwitterCommunityNotificationSettingsV0E4TypeOMn Swift.Bool, _$sSa -> _$s14TFSTwitterCore36TwitterCommunityNotificationSettingsV0E4TypeOMn, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo22TFNMenuSheetActionItemCSg, _$sSo7UILabelCSg;

@interface TwitterCommunitiesUI.CommunityNotificationSettingsViewController : TFNItemsDataViewController <TFNModalSheetViewControllerLayoutDelegate, TFNMenuSheetActionAdapterDelegate, TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
    Swift.Bool showHeaderView;
    Swift.Dictionary -> nominal type descriptor for TFSTwitterCore.TwitterCommunityNotificationSettings.NotificationType Swift.Bool updatedSettings;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterCommunityNotificationSettings.NotificationType orderedNotificationTypes;
    __C.UIStackView? $__lazy_storage_$_headerStackView;
    __C.UIImageView? $__lazy_storage_$_bannerThumbnailView;
    __C.UILabel? $__lazy_storage_$_nameLabel;
    __C.UILabel? $__lazy_storage_$_descriptionLabel;
    __C.TFNMenuSheetActionItem? $__lazy_storage_$_saveButton;
}

/* instance methods */
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (void)update:(_Bool)update;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI43CommunityNotificationSettingsViewController_h */
