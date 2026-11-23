//
#ifndef _TtC16ChatConversation21MessageInfoAvatarView_h
#define _TtC16ChatConversation21MessageInfoAvatarView_h
@import Foundation;

@class ChatUI.ConversationAvatarStyle ?, ChatUI.ConversationAvatarView, UIView;

@interface ChatConversation.MessageInfoAvatarView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ConversationAvatarView avatarView;
    ChatUI.ConversationAvatarStyle ? style;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation21MessageInfoAvatarView_h */
