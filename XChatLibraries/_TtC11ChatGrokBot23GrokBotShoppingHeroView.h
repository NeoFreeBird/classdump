//
#ifndef _TtC11ChatGrokBot23GrokBotShoppingHeroView_h
#define _TtC11ChatGrokBot23GrokBotShoppingHeroView_h
@import Foundation;

@class ChatGrokBot.GrokBotCartPurchaseRowView, ChatGrokBot.GrokBotShoppingBadgeView, ChatGrokBot.GrokBotShoppingCardPhotoView, ChatGrokBot.GrokBotShoppingHeroAccessibilityElement ?, ChatGrokBot.GrokBotShoppingProductMenu, ChatGrokBot.GrokBotShoppingSellerView, UIView, _$sSo7UILabelC, _$sySicSg;

@interface ChatGrokBot.GrokBotShoppingHeroView : UIView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onTap;
    ChatGrokBot.GrokBotShoppingBadgeView badgeView;
    __C.UILabel highlightLabel;
    __C.UILabel metaLabel;
    ChatGrokBot.GrokBotShoppingCardPhotoView photoView;
    ChatGrokBot.GrokBotShoppingProductMenu productMenu;
    ChatGrokBot.GrokBotCartPurchaseRowView purchaseRowView;
    ChatGrokBot.GrokBotShoppingSellerView sellerView;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotShoppingHeroAccessibilityElement ? $__lazy_storage_$_cardElement;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotShoppingHeroView_h */
