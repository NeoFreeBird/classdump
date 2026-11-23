//
#ifndef _TtC11ChatGrokBot32GrokBotOrderAutoApproveBlockView_h
#define _TtC11ChatGrokBot32GrokBotOrderAutoApproveBlockView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotOrderAutoApproveHeaderView, Swift.Bool, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotOrderAutoApproveBlockView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton alwaysAskButton;
    ChatGrokBot.GrokBotCardButton autoApproveButton;
    __C.UILabel detailLabel;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotOrderAutoApproveHeaderView headerView;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotCardButton toggleButton;
    Swift.Bool isAsking;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot32GrokBotOrderAutoApproveBlockView_h */
