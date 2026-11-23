//
#ifndef _TtC11ChatGrokBot30GrokBotAttachmentMediaGridCell_h
#define _TtC11ChatGrokBot30GrokBotAttachmentMediaGridCell_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemSenderView, ChatGrokBot.GrokBotMediaCellView, UICollectionViewCell;

@interface ChatGrokBot.GrokBotAttachmentMediaGridCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMediaCellView mediaView;
    ChatConversationDetails.ConversationAttachmentListItemSenderView senderView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC11ChatGrokBot30GrokBotAttachmentMediaGridCell_h */
