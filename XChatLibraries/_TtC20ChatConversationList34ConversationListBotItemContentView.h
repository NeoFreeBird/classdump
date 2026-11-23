//
#ifndef _TtC20ChatConversationList34ConversationListBotItemContentView_h
#define _TtC20ChatConversationList34ConversationListBotItemContentView_h
@import Foundation;

@class ChatConversationList.ConversationListBotTitleRowView, ChatConversationList.ConversationListSubtitleRowView, UIView, _$sSSSg, _$sSo6UIViewCSg;

@interface ChatConversationList.ConversationListBotItemContentView : UIView { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListSubtitleRowView subtitleRowView;
    ChatConversationList.ConversationListBotTitleRowView titleRowView;
    __C.UIView? avatarView;
    Swift.String? avatarViewID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20ChatConversationList34ConversationListBotItemContentView_h */
