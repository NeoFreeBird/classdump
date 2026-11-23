//
#ifndef _TtC11ChatGrokBot28GrokBotPlaceDetailsStatsView_h
#define _TtC11ChatGrokBot28GrokBotPlaceDetailsStatsView_h
@import Foundation;

@class ChatGrokBot.GrokBotPlaceDetailsStatView, UIView;

@interface ChatGrokBot.GrokBotPlaceDetailsStatsView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPlaceDetailsStatView distanceView;
    ChatGrokBot.GrokBotPlaceDetailsStatView hoursView;
    ChatGrokBot.GrokBotPlaceDetailsStatView priceView;
    ChatGrokBot.GrokBotPlaceDetailsStatView ratingView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot28GrokBotPlaceDetailsStatsView_h */
