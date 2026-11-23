//
#ifndef _TtC11ChatGrokBot22GrokBotShoppingRowView_h
#define _TtC11ChatGrokBot22GrokBotShoppingRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingCardPhotoView, ChatGrokBot.GrokBotShoppingProductMenu, Swift.Bool, UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotShoppingRowView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isHighlighted;
    ChatGrokBot.GrokBotShoppingCardPhotoView thumbnailView;
    __C.UIImageView chevronView;
    __C.UILabel priceLabel;
    ChatGrokBot.GrokBotShoppingProductMenu productMenu;
    __C.UILabel recommendationLabel;
    __C.UILabel sellerLabel;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot22GrokBotShoppingRowView_h */
