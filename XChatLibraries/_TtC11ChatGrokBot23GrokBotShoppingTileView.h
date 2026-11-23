//
#ifndef _TtC11ChatGrokBot23GrokBotShoppingTileView_h
#define _TtC11ChatGrokBot23GrokBotShoppingTileView_h
@import Foundation;

#include "_TtC11ChatGrokBot21GrokBotCardChromeView.h"

@class ChatGrokBot.GrokBotShoppingBadgeView, ChatGrokBot.GrokBotShoppingCardPhotoView, ChatGrokBot.GrokBotShoppingProductMenu, ChatGrokBot.GrokBotShoppingSellerView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC, _$sySi_So6UIViewCtcSg;

@interface ChatGrokBot.GrokBotShoppingTileView : ChatGrokBot.GrokBotCardChromeView { // (Swift)
    /* instance variables */
    ((Swift.Int, __C.UIView) -> ())? onTap;
    ChatGrokBot.GrokBotShoppingBadgeView badgeView;
    __C.UILabel highlightLabel;
    nominal type descriptor for CoreGraphics.CGFloat photoHeight;
    ChatGrokBot.GrokBotShoppingCardPhotoView photoView;
    __C.UILabel priceLabel;
    ChatGrokBot.GrokBotShoppingProductMenu productMenu;
    __C.UILabel ratingLabel;
    ChatGrokBot.GrokBotShoppingSellerView sellerView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot23GrokBotShoppingTileView_h */
