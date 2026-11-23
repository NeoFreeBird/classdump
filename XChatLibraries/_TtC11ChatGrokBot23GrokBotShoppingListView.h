//
#ifndef _TtC11ChatGrokBot23GrokBotShoppingListView_h
#define _TtC11ChatGrokBot23GrokBotShoppingListView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotShoppingRowView ?, ChatGrokBot.GrokBotShoppingSellerView, UIView, _$sSa -> ChatGrokBot.GrokBotShoppingRowView, _$sSaySo6UIViewCG, _$sSo7UILabelC, _$sySScSg, _$sySi_So6UIViewCtcSg, _$syycSg;

@interface ChatGrokBot.GrokBotShoppingListView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onBuy;
    (() -> ())? onMore;
    (() -> ())? onSeeAll;
    ((Swift.Int, __C.UIView) -> ())? onTapProduct;
    ChatGrokBot.GrokBotShoppingSellerView headerView;
    ChatGrokBot.GrokBotCardButton seeAllButton;
    __C.UILabel statusLabel;
    [__C.UIView] dividerViews;
    ChatGrokBot.GrokBotShoppingRowView ? highlightedRowView;
    Swift.Array -> ChatGrokBot.GrokBotShoppingRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)didTap:(id)tap;

@end

#endif /* _TtC11ChatGrokBot23GrokBotShoppingListView_h */
