//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7Profile31MiniProfileScreenViewController_h
#define _TtC7Profile31MiniProfileScreenViewController_h
@import Foundation;

@class Profile.BadgedNameLabel, Profile.MiniProfileBioView, Profile.MiniProfileBodyPlaceholderView ?, Profile.MiniProfileCountsRowView ?, Profile.MiniProfileDashedSeparatorView ?, Profile.MiniProfileHandleRowView, Profile.MiniProfileHeroView, Profile.MiniProfilePressableRowView ?, Profile.MiniProfileScreenViewController.ContentGate, Profile.MiniProfileScreenViewController.DisplayState, Profile.MiniProfileScreenViewControllerDelegate ?, Profile.MiniProfileSocialProofRowView, Profile.MiniProfileTabBarSkeletonView, Swift.Bool, _$s13XDesignSystem10LinkedTextCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn ?, _$sSbycSg, _$sSo16TIPImagePipelineCSg, _$sSo6UIMenuCSgSo6UIViewCcSg, _$sSo6UIViewCSgXw, _$sSo7UILabelC, _$sSo7UILabelCSg, _$syycSg, __C._NSRange ?;

@interface Profile.MiniProfileScreenViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Profile.MiniProfileScreenViewControllerDelegate ? delegate;
    ((__C.UIView) -> __C.UIMenu?)? ellipsisMenuProvider;
    (() -> Swift.Bool)? ellipsisMenuAvailability;
    (() -> ())? ellipsisMenuWillDisplay;
    Profile.MiniProfileScreenViewController.DisplayState displayState;
    __C.TIPImagePipeline? imagePipeline;
    Profile.MiniProfileHeroView heroView;
    Profile.BadgedNameLabel nameLabel;
    Profile.MiniProfileHandleRowView handleRow;
    __C.UILabel accountLabelLabel;
    Profile.MiniProfileBioView bioView;
    Profile.MiniProfileBodyPlaceholderView ? $__lazy_storage_$_bodyPlaceholderView;
    __C.UILabel metadataLabel;
    __C.UILabel followingCountLabel;
    __C.UILabel followersCountLabel;
    __C.UILabel? $__lazy_storage_$_unavailableHandleLabel;
    __C.UILabel? $__lazy_storage_$_unavailableTitleLabel;
    nominal type descriptor for XDesignSystem.LinkedText ? $__lazy_storage_$_unavailableMessageView;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_namePressRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_handlePressRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_accountLabelPressRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_metadataPressRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_followingCountPressRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_followersCountPressRow;
    Profile.MiniProfileCountsRowView ? $__lazy_storage_$_countsRow;
    Profile.MiniProfilePressableRowView ? $__lazy_storage_$_socialProofPressRow;
    Profile.MiniProfileDashedSeparatorView ? $__lazy_storage_$_extendedSeparatorView;
    Profile.MiniProfileTabBarSkeletonView tabBarSkeletonView;
    nominal type descriptor for XDesignSystem.ListItems ? $__lazy_storage_$_extendedListView;
    Profile.MiniProfileSocialProofRowView socialProofRow;
    Profile.MiniProfileScreenViewController.ContentGate contentGate;
    __C._NSRange ? joinedSegmentRange;
    Swift.Bool isShowingSkeleton;
    weak __C.UIView? extendedSpacingRow;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7Profile31MiniProfileScreenViewController_h */
