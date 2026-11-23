//
#ifndef _TtC16ChatConversation12InfoItemCell_h
#define _TtC16ChatConversation12InfoItemCell_h
@import Foundation;

@class ChatConversation.InfoItem ?, ChatConversation.InfoItemContentView, UICollectionViewCell;

@interface ChatConversation.InfoItemCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatConversation.InfoItemContentView infoContentView;
    ChatConversation.InfoItem ? infoItem;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation12InfoItemCell_h */
