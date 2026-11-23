//
#ifndef _TtC11ChatGrokBot27GrokBotPlaceDetailsYelpView_h
#define _TtC11ChatGrokBot27GrokBotPlaceDetailsYelpView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotYelpRatingView, UIView;

@interface ChatGrokBot.GrokBotPlaceDetailsYelpView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotYelpRatingView ratingView;
    ChatGrokBot.GrokBotCardButton viewOnYelpButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot27GrokBotPlaceDetailsYelpView_h */
