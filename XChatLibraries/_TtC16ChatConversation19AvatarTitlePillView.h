//
#ifndef _TtC16ChatConversation19AvatarTitlePillView_h
#define _TtC16ChatConversation19AvatarTitlePillView_h
@import Foundation;

@class ChatConversation.PillView, ChatUI.ChatImageLoading, ChatUI.ConversationAvatarStyle, ChatUI.ConversationAvatarView, NSString, UIView;

@interface ChatConversation.AvatarTitlePillView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ConversationAvatarView avatarView;
    ChatUI.ChatImageLoading imageLoader;
    ChatConversation.PillView pillView;
    ChatUI.ConversationAvatarStyle avatarStyle;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation19AvatarTitlePillView_h */
