//
#ifndef _TtC11ChatGrokBot30GrokBotPlaceDetailsActionsView_h
#define _TtC11ChatGrokBot30GrokBotPlaceDetailsActionsView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView;

@interface ChatGrokBot.GrokBotPlaceDetailsActionsView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton callButton;
    ChatGrokBot.GrokBotCardButton directionsButton;
    ChatGrokBot.GrokBotCardButton reserveButton;
    ChatGrokBot.GrokBotCardButton websiteButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotPlaceDetailsActionsView_h */
