//
#ifndef _TtC11ChatGrokBot23GrokBotWeatherDailyView_h
#define _TtC11ChatGrokBot23GrokBotWeatherDailyView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSa -> ChatGrokBot.GrokBotWeatherDayRowView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotWeatherDailyView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel headingLabel;
    ChatGrokBot.GrokBotCardButton showMoreButton;
    Swift.Array -> ChatGrokBot.GrokBotWeatherDayRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotWeatherDailyView_h */
