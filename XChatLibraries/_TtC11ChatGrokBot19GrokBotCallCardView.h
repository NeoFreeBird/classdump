//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot19GrokBotCallCardView_h
#define _TtC11ChatGrokBot19GrokBotCallCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCallHeaderView, ChatGrokBot.GrokBotCallTranscriptView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotRoundedContainerView, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCallCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCallHeaderView headerView;
    ChatGrokBot.GrokBotRoundedContainerView panelView;
    ChatGrokBot.GrokBotCardButton primaryButton;
    ChatGrokBot.GrokBotCardButton secondaryButton;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotCallTranscriptView transcriptView;
    __C.UILabel waitingMessageLabel;
    __C.UILabel waitingTitleLabel;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot19GrokBotCallCardView_h */
