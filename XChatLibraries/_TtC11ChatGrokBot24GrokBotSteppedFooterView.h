//
#ifndef _TtC11ChatGrokBot24GrokBotSteppedFooterView_h
#define _TtC11ChatGrokBot24GrokBotSteppedFooterView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotSteppedDotsView, UIView;

@interface ChatGrokBot.GrokBotSteppedFooterView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton backButton;
    ChatGrokBot.GrokBotSteppedDotsView dotsView;
    ChatGrokBot.GrokBotCardButton nextButton;
    ChatGrokBot.GrokBotCardButton skipButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotSteppedFooterView_h */
