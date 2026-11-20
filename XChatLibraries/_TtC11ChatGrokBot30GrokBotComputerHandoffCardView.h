//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotComputerHandoffCardView_h
#define _TtC11ChatGrokBot30GrokBotComputerHandoffCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCard.HandoffResolution, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, ChatGrokBot.GrokBotComputerHandoffCardView.HandBack ?, ChatGrokBot.GrokBotComputerSnapshotView, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotComputerHandoffCardView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotCardButton finishButton;
    ChatGrokBot.GrokBotCardButton skipButton;
    ChatGrokBot.GrokBotComputerSnapshotView snapshotView;
    ChatGrokBot.GrokBotCardButton takeOverButton;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UILabel titleLabel;
    (() -> ())? onOpenComputer;
    ChatGrokBot.GrokBotCard.HandoffResolution resolution;
    ChatGrokBot.GrokBotComputerHandoffCardView.HandBack ? tappedHandBack;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotComputerHandoffCardView_h */
