//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot26GrokBotFlightResultRowView_h
#define _TtC11ChatGrokBot26GrokBotFlightResultRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotFlightAirlineMarkView, ChatGrokBot.GrokBotFlightFareLineView, UIView, _$sSa -> ChatGrokBot.GrokBotFlightLegView, _$sSaySo7UILabelCG, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightResultRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotFlightFareLineView fareLineView;
    __C.UILabel feesLabel;
    ChatGrokBot.GrokBotFlightAirlineMarkView markView;
    __C.UILabel priceLabel;
    __C.UILabel timesLabel;
    Swift.Array -> ChatGrokBot.GrokBotFlightLegView legViews;
    [__C.UILabel] priceNoteLabels;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot26GrokBotFlightResultRowView_h */
