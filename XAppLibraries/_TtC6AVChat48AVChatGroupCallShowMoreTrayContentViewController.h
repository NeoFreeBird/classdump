//
#ifndef _TtC6AVChat48AVChatGroupCallShowMoreTrayContentViewController_h
#define _TtC6AVChat48AVChatGroupCallShowMoreTrayContentViewController_h
@import Foundation;

@class Chat.AVChatGroupCallShowMoreModel, Chat.AVChatGroupCallShowMoreState, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$sSD -> _$ss5Int64VMn AVChat.AVChatGroupCallShowMoreTrayContentViewController.ParticipantViews, _$sSo6UIMenuCSg;

@interface AVChat.AVChatGroupCallShowMoreTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatGroupCallShowMoreModel model;
    oneway _Atomic Chat.AVChatGroupCallShowMoreState state;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 AVChat.AVChatGroupCallShowMoreTrayContentViewController.ParticipantViews viewsByUserID;
    nominal type descriptor for Combine.AnyCancellable ? stateSubscription;
    __C.UIMenu? $__lazy_storage_$_audioRouteMenu;
}

/* instance methods */

@end

#endif /* _TtC6AVChat48AVChatGroupCallShowMoreTrayContentViewController_h */
