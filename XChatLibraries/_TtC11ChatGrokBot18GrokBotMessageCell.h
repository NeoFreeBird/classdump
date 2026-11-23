//
#ifndef _TtC11ChatGrokBot18GrokBotMessageCell_h
#define _TtC11ChatGrokBot18GrokBotMessageCell_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageRowView, UICollectionViewCell;

@interface ChatGrokBot.GrokBotMessageCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageRowView rowView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC11ChatGrokBot18GrokBotMessageCell_h */
