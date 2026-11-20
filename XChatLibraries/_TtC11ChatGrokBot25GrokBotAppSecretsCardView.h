//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot25GrokBotAppSecretsCardView_h
#define _TtC11ChatGrokBot25GrokBotAppSecretsCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotAppSecretsAsk ?, ChatGrokBot.GrokBotAppSecretsUntoldRowView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSa -> ChatGrokBot.GrokBotAppSecretRowView, _$sSo7UILabelC, _$sySa -> ChatGrokBot.GrokBotAppSecretValue _$sGcSg;

@interface ChatGrokBot.GrokBotAppSecretsCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    __C.UILabel messageLabel;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotCardButton retryButton;
    ChatGrokBot.GrokBotCardButton saveButton;
    ChatGrokBot.GrokBotAppSecretsUntoldRowView untoldRowView;
    ChatGrokBot.GrokBotAppSecretsAsk ? ask;
     empty-list Swift.Array -> ChatGrokBot.GrokBotAppSecretValue _$sGcSg onSave;
    Swift.Array -> ChatGrokBot.GrokBotAppSecretRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotAppSecretsCardView_h */
