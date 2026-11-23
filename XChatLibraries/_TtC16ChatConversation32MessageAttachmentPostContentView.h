//
#ifndef _TtC16ChatConversation32MessageAttachmentPostContentView_h
#define _TtC16ChatConversation32MessageAttachmentPostContentView_h
@import Foundation;

@class ChatConversation.MessageAttachmentPostBodyView, ChatConversation.MessageAttachmentPostCardView ?, ChatConversation.MessageAttachmentPostCommunityNoteView ?, ChatConversation.MessageAttachmentPostContentView.Configuration ?, ChatConversation.MessageAttachmentPostHeaderView, ChatConversation.MessageAttachmentPostMediaGridView, ChatConversation.MessageAttachmentPostQuotedView ?, UIView, _$sSo6UIViewC;

@interface ChatConversation.MessageAttachmentPostContentView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentBackgroundView;
    ChatConversation.MessageAttachmentPostMediaGridView mediaView;
    ChatConversation.MessageAttachmentPostHeaderView headerView;
    ChatConversation.MessageAttachmentPostBodyView bodyView;
    ChatConversation.MessageAttachmentPostQuotedView ? quotedView;
    ChatConversation.MessageAttachmentPostCardView ? cardView;
    ChatConversation.MessageAttachmentPostCommunityNoteView ? communityNoteView;
    ChatConversation.MessageAttachmentPostContentView.Configuration ? configuration;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation32MessageAttachmentPostContentView_h */
