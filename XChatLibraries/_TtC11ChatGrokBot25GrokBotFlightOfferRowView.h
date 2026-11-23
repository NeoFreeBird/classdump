//
#ifndef _TtC11ChatGrokBot25GrokBotFlightOfferRowView_h
#define _TtC11ChatGrokBot25GrokBotFlightOfferRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotFlightAirlineMarkView, ChatGrokBot.GrokBotFlightOfferDetailsView, Swift.Bool, UIView, _$sSa -> ChatGrokBot.GrokBotFlightOfferLegView, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$sSo9UIControlC, _$syycSg;

@interface ChatGrokBot.GrokBotFlightOfferRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onSelect;
    (() -> ())? onToggleDetails;
    __C.UIButton chevronButton;
    ChatGrokBot.GrokBotFlightOfferDetailsView detailsView;
    __C.UIView dividerView;
    __C.UILabel fareLabel;
    ChatGrokBot.GrokBotFlightAirlineMarkView markView;
    __C.UILabel nameLabel;
    __C.UILabel priceLabel;
    __C.UIControl selectControl;
    __C.UIView tintView;
    Swift.Bool isExpanded;
    Swift.Array -> ChatGrokBot.GrokBotFlightOfferLegView legViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)pickRow;
- (void)toggleDetails;

@end

#endif /* _TtC11ChatGrokBot25GrokBotFlightOfferRowView_h */
