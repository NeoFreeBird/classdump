//
#ifndef _TtC11ChatGrokBot15GrokBotCardView_h
#define _TtC11ChatGrokBot15GrokBotCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCard ?, ChatGrokBot.GrokBotCardView.Kind ?, UIView, _$sSo6UIViewCSg, _$syycSg, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotCardView : UIView { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets horizontalBleed;
    (() -> ())? onLongPress;
    ChatGrokBot.GrokBotCard ? card;
    __C.UIView? contentView;
    ChatGrokBot.GrokBotCardView.Kind ? kind;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot15GrokBotCardView_h */
