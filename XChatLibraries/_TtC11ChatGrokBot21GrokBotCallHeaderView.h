//
#ifndef _TtC11ChatGrokBot21GrokBotCallHeaderView_h
#define _TtC11ChatGrokBot21GrokBotCallHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotCall.Clock, ChatGrokBot.GrokBotCallStatusView, Swift.Bool, UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7NSTimerCSg, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCallHeaderView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel clockLabel;
    __C.UIImageView glyphView;
    __C.UILabel kindLabel;
    ChatGrokBot.GrokBotCallStatusView statusView;
    __C.UIView tileView;
    ChatGrokBot.GrokBotCall.Clock clock;
    __C.NSTimer? clockTimer;
    Swift.Bool isPhoneCall;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot21GrokBotCallHeaderView_h */
