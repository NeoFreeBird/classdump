//
#ifndef _TtC11ChatGrokBot25GrokBotCalendarGuestsView_h
#define _TtC11ChatGrokBot25GrokBotCalendarGuestsView_h
@import Foundation;

@class ChatGrokBot.GrokBotCalendarLinesView, UIView, _$sSa -> ChatGrokBot.GrokBotCalendarPersonView, _$sSa -> ChatGrokBot.GrokBotCalendarPersonView.Person, _$sSaySo6UIViewCG;

@interface ChatGrokBot.GrokBotCalendarGuestsView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCalendarLinesView summaryView;
    Swift.Array -> ChatGrokBot.GrokBotCalendarPersonView.Person guests;
    Swift.Array -> ChatGrokBot.GrokBotCalendarPersonView personViews;
    [__C.UIView] ruleViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCalendarGuestsView_h */
