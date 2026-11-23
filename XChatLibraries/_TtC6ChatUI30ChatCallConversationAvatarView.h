//
#ifndef _TtC6ChatUI30ChatCallConversationAvatarView_h
#define _TtC6ChatUI30ChatCallConversationAvatarView_h
@import Foundation;

@class ChatUI.ChatImageLoading, ChatUI.ConversationAvatarView, UIView;

@interface ChatUI.ChatCallConversationAvatarView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ConversationAvatarView avatarView;
    ChatUI.ChatImageLoading imageLoader;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6ChatUI30ChatCallConversationAvatarView_h */
