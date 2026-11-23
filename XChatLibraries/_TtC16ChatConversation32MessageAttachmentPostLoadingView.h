//
#ifndef _TtC16ChatConversation32MessageAttachmentPostLoadingView_h
#define _TtC16ChatConversation32MessageAttachmentPostLoadingView_h
@import Foundation;

@class ChatUI.AttachmentLoadingIndicatorView, UIView;

@interface ChatConversation.MessageAttachmentPostLoadingView : UIView { // (Swift)
    /* instance variables */
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation32MessageAttachmentPostLoadingView_h */
