//
#ifndef _TtC11ChatGrokBot29GrokBotShoppingWhereToBuyView_h
#define _TtC11ChatGrokBot29GrokBotShoppingWhereToBuyView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingOffer _$scSg ->, UIView, _$sSa -> ChatGrokBot.GrokBotShoppingOfferRowView, _$sSaySo6UIViewCG, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotShoppingWhereToBuyView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotShoppingOffer _$scSg -> onSelect;
    ChatGrokBot.GrokBotShoppingOffer _$scSg -> onView;
    __C.UIView groupView;
    __C.UILabel headerLabel;
    [__C.UIView] dividerViews;
    Swift.Array -> ChatGrokBot.GrokBotShoppingOfferRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot29GrokBotShoppingWhereToBuyView_h */
