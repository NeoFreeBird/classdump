//
#ifndef _TtC11ChatGrokBot24GrokBotShoppingPicksView_h
#define _TtC11ChatGrokBot24GrokBotShoppingPicksView_h
@import Foundation;

@class ChatGrokBot.GrokBotCartStore ?, ChatGrokBot.GrokBotMessageContextMenuInteraction ?, ChatGrokBot.GrokBotShoppingSubscription ?, UIView, _$sSa -> ChatGrokBot.GrokBotShoppingCardView, _$sySScSg, _$sySi_S2iSo6UIViewCtcSg, _$sySicSg, _$syycSg, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotShoppingPicksView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCartStore ? cart;
    __C.UIEdgeInsets horizontalBleed;
    (() -> ())? onLongPress;
    ((Swift.Int) -> ())? onSeeAll;
    ((Swift.String) -> ())? onSendPrompt;
    ((Swift.Int, Swift.Int, Swift.Int, __C.UIView) -> ())? onTapProduct;
    ChatGrokBot.GrokBotShoppingSubscription ? subscription;
    Swift.Array -> ChatGrokBot.GrokBotShoppingCardView cardViews;
    ChatGrokBot.GrokBotMessageContextMenuInteraction ? $__lazy_storage_$_contextMenuInteraction;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot24GrokBotShoppingPicksView_h */
