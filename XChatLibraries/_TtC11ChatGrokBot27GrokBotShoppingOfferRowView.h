//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotShoppingOfferRowView_h
#define _TtC11ChatGrokBot27GrokBotShoppingOfferRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotConnectorIconTileView, Swift.Bool, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotShoppingOfferRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onSelect;
    (() -> ())? onView;
    __C.UILabel detailsLabel;
    __C.UILabel priceLabel;
    ChatGrokBot.GrokBotConnectorIconTileView sellerIconView;
    __C.UILabel sellerLabel;
    nominal type descriptor for XDesignSystem.Button selectButton;
    nominal type descriptor for XDesignSystem.Button viewButton;
    Swift.Bool isSoldOut;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapDetails;

@end

#endif /* _TtC11ChatGrokBot27GrokBotShoppingOfferRowView_h */
