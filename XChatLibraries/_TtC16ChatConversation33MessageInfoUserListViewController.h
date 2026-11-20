//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation33MessageInfoUserListViewController_h
#define _TtC16ChatConversation33MessageInfoUserListViewController_h
@import Foundation;

@class ChatConversation.MessageInfoUserListPresentation, ChatUI.ChatEmptyStateView, ChatUI.ChatImageLoading, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s7Combine12AnyPublisherVMn _$sySa -> ChatConversation.MessageInfoUserListItem _$sG _$ss5NeverOMn, _$sSDySS ChatConversation.MessageInfoAvatarView, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversation.MessageInfoUserListViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    ChatUI.ChatEmptyStateView emptyStateView;
    ChatUI.ChatImageLoading imageLoader;
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.Array -> ChatConversation.MessageInfoUserListItem _$sG nominal type descriptor for Swift.Never items;
    ChatConversation.MessageInfoUserListPresentation presentation;
    Swift.Dictionary empty-list Swift.String ChatConversation.MessageInfoAvatarView avatarViews;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC16ChatConversation33MessageInfoUserListViewController_h */
