//
#ifndef _TtC11ChatGrokBot24GrokBotHotelTileGridView_h
#define _TtC11ChatGrokBot24GrokBotHotelTileGridView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotHotelTileView, _$sSaySSG;

@interface ChatGrokBot.GrokBotHotelTileGridView : UIView { // (Swift)
    /* instance variables */
    [Swift.String] tileIDs;
    Swift.Array -> ChatGrokBot.GrokBotHotelTileView tileViews;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot24GrokBotHotelTileGridView_h */
