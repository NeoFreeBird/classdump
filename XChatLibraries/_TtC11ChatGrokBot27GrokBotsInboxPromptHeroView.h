//
#ifndef _TtC11ChatGrokBot27GrokBotsInboxPromptHeroView_h
#define _TtC11ChatGrokBot27GrokBotsInboxPromptHeroView_h
@import Foundation;

@class ChatGrokBot.GrokBotHostingView, ChatGrokBot.GrokBotsInboxPromptPileView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotsInboxPromptHeroView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHostingView markView;
    ChatGrokBot.GrokBotsInboxPromptPileView pileView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot27GrokBotsInboxPromptHeroView_h */
