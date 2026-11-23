//
#ifndef _TtC16ChatConversation32GrokBotMessageAttachmentPostView_h
#define _TtC16ChatConversation32GrokBotMessageAttachmentPostView_h
@import Foundation;

@class ChatConversation.MessageAttachmentPostView, ChatUI.ChatImageLoading, UIView;

@interface ChatConversation.GrokBotMessageAttachmentPostView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatImageLoading imageLoader;
    ChatConversation.MessageAttachmentPostView postView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation32GrokBotMessageAttachmentPostView_h */
