//
#ifndef _TtC14TwitterUISwift35ReplyingToTrayContentViewController_h
#define _TtC14TwitterUISwift35ReplyingToTrayContentViewController_h
@import Foundation;

@class TAPAccount0A11Perspective_14TFSTwitterCore0C29AccountFeatureSwitchProvidingAC0cE9FollowingAC0cE12ScribeAccesspSg, TwitterUISwift.UserListItemFactory, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s14TFSTwitterCore0A13UserReferenceCMn _$scSg ->, _$s14TFSTwitterCore0A19UserDataSourceModel_pSgSo0a9CanonicalC0_pc, _$sSD -> _$ss5Int64VMn TwitterUISwift.ReplyingToTrayContentViewController.LoadedUser, _$sSa -> _$s14TFSTwitterCore0A13UserReferenceCMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$ss5Int64VMn, _$sSo23TFSTwitterScribeContextCSg, _$ss5Int64VMn, _$sySo16UIViewControllerC_ _$ss5ErrorMp _$sSgtcSg, _$syycSg;

@interface TwitterUISwift.ReplyingToTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference userReferences;
    Swift.Set -> nominal type descriptor for Swift.Int64 unmentionedUserIDs;
    nominal type descriptor for Swift.Int64 viewerUserID;
    TAPAccount0A11Perspective_14TFSTwitterCore0C29AccountFeatureSwitchProvidingAC0cE9FollowingAC0cE12ScribeAccesspSg followAccount;
    __C.TFSTwitterScribeContext? followScribeContext;
    (__C.TFSTwitterCanonicalUser) -> TFSTwitterCore.TFSTwitterUserDataSourceModel? userDataSource;
    (() -> ())? onPresented;
    nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference _$scSg -> onSelectUser;
     empty-list __C.UIViewController first-element-marker  protocol descriptor for Swift.Error _$sSgtcSg onFollowFailed;
    TwitterUISwift.UserListItemFactory itemFactory;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 TwitterUISwift.ReplyingToTrayContentViewController.LoadedUser loadedUsersByID;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
}

/* instance methods */
- (void)viewDidDisappear:(_Bool)disappear;

@end

#endif /* _TtC14TwitterUISwift35ReplyingToTrayContentViewController_h */
