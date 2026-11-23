//
#ifndef _TtC11ChatGrokBot15GrokBotCardCell_h
#define _TtC11ChatGrokBot15GrokBotCardCell_h
@import Foundation;

@class ChatGrokBot.GrokBotCardView, UICollectionViewCell;

@interface ChatGrokBot.GrokBotCardCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardView cardView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)applyLayoutAttributes:(id)attributes;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot15GrokBotCardCell_h */
