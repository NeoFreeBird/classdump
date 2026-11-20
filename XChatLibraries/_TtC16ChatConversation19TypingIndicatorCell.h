//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation19TypingIndicatorCell_h
#define _TtC16ChatConversation19TypingIndicatorCell_h
@import Foundation;

@class ChatConversation.TypingIndicatorCell.Configuration ?, ChatConversation.TypingIndicatorCellContentView, UICollectionViewCell;

@interface ChatConversation.TypingIndicatorCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatConversation.TypingIndicatorCellContentView typingIndicatorContentView;
    ChatConversation.TypingIndicatorCell.Configuration ? configuration;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation19TypingIndicatorCell_h */
