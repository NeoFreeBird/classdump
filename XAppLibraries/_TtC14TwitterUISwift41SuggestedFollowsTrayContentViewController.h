//
#ifndef _TtC14TwitterUISwift41SuggestedFollowsTrayContentViewController_h
#define _TtC14TwitterUISwift41SuggestedFollowsTrayContentViewController_h
@import Foundation;

@class TwitterUISwift.UserListItemFactory, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSaySo23TFSTwitterCanonicalUser_pG, _$sySo23TFSTwitterCanonicalUser_pcSg, _$syycSg;

@interface TwitterUISwift.SuggestedFollowsTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    TwitterUISwift.UserListItemFactory itemFactory;
    (() -> ())? onPresented;
    ((__C.TFSTwitterCanonicalUser) -> ())? onSelectUser;
    ((__C.TFSTwitterCanonicalUser) -> ())? onDismissUser;
    [__C.TFSTwitterCanonicalUser] users;
}

/* instance methods */

@end

#endif /* _TtC14TwitterUISwift41SuggestedFollowsTrayContentViewController_h */
