//
#ifndef _TtC23ChatConversationDetails30ConversationAttachmentListCell_h
#define _TtC23ChatConversationDetails30ConversationAttachmentListCell_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemContentView, ChatConversationDetails.ConversationAttachmentListItemSenderView, ChatSyncState.ChatMediaDownloadRequest ?, UICollectionViewCell;

@interface ChatConversationDetails.ConversationAttachmentListCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatSyncState.ChatMediaDownloadRequest ? downloadRequest;
    ChatConversationDetails.ConversationAttachmentListItemContentView itemContentView;
    ChatConversationDetails.ConversationAttachmentListItemSenderView senderView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* _TtC23ChatConversationDetails30ConversationAttachmentListCell_h */
