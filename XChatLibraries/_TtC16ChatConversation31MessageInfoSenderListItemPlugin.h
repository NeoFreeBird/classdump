//
#ifndef _TtC16ChatConversation31MessageInfoSenderListItemPlugin_h
#define _TtC16ChatConversation31MessageInfoSenderListItemPlugin_h
@import Foundation;

@class ChatConversation.MessageInfoDetailsStream, ChatConversation.MessageInfoSenderAvatarStream, ChatConversation.MessageInfoTrayListItemContext, ChatUI.AffiliateBadgeView, ChatUI.ChatImageLoading, _$sSo11UIImageViewC, _TtCs12_SwiftObject;

@interface ChatConversation.MessageInfoSenderListItemPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.UIImageView avatarView;
    ChatUI.AffiliateBadgeView badgeView;
    ChatConversation.MessageInfoTrayListItemContext context;
    ChatUI.ChatImageLoading imageLoader;
    ChatConversation.MessageInfoDetailsStream messageInfoDetailsStream;
    ChatConversation.MessageInfoSenderAvatarStream messageInfoSenderAvatarStream;
}

@end

#endif /* _TtC16ChatConversation31MessageInfoSenderListItemPlugin_h */
