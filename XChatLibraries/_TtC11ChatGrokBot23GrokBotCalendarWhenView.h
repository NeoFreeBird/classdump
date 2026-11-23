//
#ifndef _TtC11ChatGrokBot23GrokBotCalendarWhenView_h
#define _TtC11ChatGrokBot23GrokBotCalendarWhenView_h
@import Foundation;

@class ChatGrokBot.GrokBotCalendarDayScheduleView, ChatGrokBot.GrokBotCalendarDetailsToggle, ChatGrokBot.GrokBotCalendarLinesView, UIView;

@interface ChatGrokBot.GrokBotCalendarWhenView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCalendarLinesView linesView;
    ChatGrokBot.GrokBotCalendarDayScheduleView scheduleView;
    ChatGrokBot.GrokBotCalendarDetailsToggle toggle;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot23GrokBotCalendarWhenView_h */
