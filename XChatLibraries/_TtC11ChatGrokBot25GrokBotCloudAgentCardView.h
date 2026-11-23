//
#ifndef _TtC11ChatGrokBot25GrokBotCloudAgentCardView_h
#define _TtC11ChatGrokBot25GrokBotCloudAgentCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCloudAgentMetaLineView, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSo7UIImageCSg;

@interface ChatGrokBot.GrokBotCloudAgentCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCloudAgentMetaLineView branchLineView;
    ChatGrokBot.GrokBotCloudAgentMetaLineView diffLineView;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardButton openButton;
    ChatGrokBot.GrokBotCardButton pullRequestButton;
    ChatGrokBot.GrokBotCloudAgentMetaLineView pullRequestStaleLineView;
    ChatGrokBot.GrokBotCloudAgentMetaLineView staleLineView;
    __C.UIImage? cursorLogo;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCloudAgentCardView_h */
