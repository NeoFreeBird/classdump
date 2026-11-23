//
#ifndef _TtC11ChatGrokBot29GrokBotFlightOfferDetailsView_h
#define _TtC11ChatGrokBot29GrokBotFlightOfferDetailsView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotFlightFactView, _$sSa -> ChatGrokBot.GrokBotFlightPriceStateView, _$sSaySaySo6UIViewCGG, _$sShySOG;

@interface ChatGrokBot.GrokBotFlightOfferDetailsView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> ChatGrokBot.GrokBotFlightFactView factViews;
    Swift.Set<Swift.ObjectIdentifier> indentedViews;
    [[__C.UIView]] journeyViews;
    Swift.Array -> ChatGrokBot.GrokBotFlightPriceStateView priceViews;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot29GrokBotFlightOfferDetailsView_h */
