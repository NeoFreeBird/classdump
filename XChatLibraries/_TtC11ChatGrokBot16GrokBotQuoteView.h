//
#ifndef _TtC11ChatGrokBot16GrokBotQuoteView_h
#define _TtC11ChatGrokBot16GrokBotQuoteView_h
@import Foundation;

@class ChatGrokBot.GrokBotQuoteBubbleView, ChatGrokBot.GrokBotQuoteMediaView, Swift.Bool, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotQuoteView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    ChatGrokBot.GrokBotQuoteBubbleView bubbleView;
    __C.UILabel headerLabel;
    ChatGrokBot.GrokBotQuoteMediaView mediaView;
    Swift.Bool isFromUser;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot16GrokBotQuoteView_h */
