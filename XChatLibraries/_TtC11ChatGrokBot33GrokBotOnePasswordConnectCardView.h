//
#ifndef _TtC11ChatGrokBot33GrokBotOnePasswordConnectCardView_h
#define _TtC11ChatGrokBot33GrokBotOnePasswordConnectCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSa -> ChatGrokBot.GrokBotOnePasswordVaultNoteView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotOnePasswordConnectCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton connectButton;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    __C.UILabel statusLabel;
    Swift.Array -> ChatGrokBot.GrokBotOnePasswordVaultNoteView noteViews;
    (() -> ())? onConnect;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot33GrokBotOnePasswordConnectCardView_h */
