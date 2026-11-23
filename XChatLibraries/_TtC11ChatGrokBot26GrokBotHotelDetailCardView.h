//
#ifndef _TtC11ChatGrokBot26GrokBotHotelDetailCardView_h
#define _TtC11ChatGrokBot26GrokBotHotelDetailCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotHotelChipsView, ChatGrokBot.GrokBotHotelTileView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotHotelDetailCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHotelChipsView chipsView;
    __C.UILabel staleLabel;
    ChatGrokBot.GrokBotHotelTileView tileView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot26GrokBotHotelDetailCardView_h */
