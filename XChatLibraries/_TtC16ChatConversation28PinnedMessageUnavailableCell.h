//
#ifndef _TtC16ChatConversation28PinnedMessageUnavailableCell_h
#define _TtC16ChatConversation28PinnedMessageUnavailableCell_h
@import Foundation;

@class ChatConversation.MessageCellActionHandler ?, ChatConversation.PinnedMessageUnavailableContentView, ChatConversation.PinnedMessageUnavailableItem ?, UICollectionViewCell;

@interface ChatConversation.PinnedMessageUnavailableCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessageUnavailableContentView unavailableContentView;
    ChatConversation.MessageCellActionHandler ? actionHandler;
    ChatConversation.PinnedMessageUnavailableItem ? item;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation28PinnedMessageUnavailableCell_h */
