//
#ifndef _TtC11ChatGrokBot23GrokBotShoppingCardView_h
#define _TtC11ChatGrokBot23GrokBotShoppingCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingCardView.Content ?, ChatGrokBot.GrokBotShoppingPicks.Layout ?, UIView, _$sySScSg, _$sySi_SiSo6UIViewCtcSg, _$syycSg, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotShoppingCardView : UIView { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets horizontalBleed;
    ((Swift.String) -> ())? onBuy;
    (() -> ())? onMore;
    (() -> ())? onSeeAll;
    ((Swift.Int, Swift.Int, __C.UIView) -> ())? onTapProduct;
    ChatGrokBot.GrokBotShoppingCardView.Content ? content;
    ChatGrokBot.GrokBotShoppingPicks.Layout ? layout;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot23GrokBotShoppingCardView_h */
