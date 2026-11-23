//
#ifndef _TtC11ChatGrokBot22GrokBotSecureTextField_h
#define _TtC11ChatGrokBot22GrokBotSecureTextField_h
@import Foundation;

@class Swift.Bool, UITextField, _$sSo6UIViewCSg, _$sSo8UIButtonC;

@interface ChatGrokBot.GrokBotSecureTextField : UITextField { // (Swift)
    /* instance variables */
    Swift.Bool isSecure;
    __C.UIView? trailingAccessoryView;
    __C.UIButton revealButton;
    Swift.Bool isRevealed;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapRevealButton;

@end

#endif /* _TtC11ChatGrokBot22GrokBotSecureTextField_h */
