//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot25GrokBotRuleChangeCardView_h
#define _TtC11ChatGrokBot25GrokBotRuleChangeCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotRuleChange.Failure ?, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotRuleChangeCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton confirmButton;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotCardButton notNowButton;
    __C.UILabel sentenceLabel;
    ChatGrokBot.GrokBotCardButton settledButton;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotRuleChange.Failure ? failure;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotRuleChangeCardView_h */
