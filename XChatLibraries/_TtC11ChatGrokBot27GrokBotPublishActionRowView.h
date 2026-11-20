//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotPublishActionRowView_h
#define _TtC11ChatGrokBot27GrokBotPublishActionRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSa -> ChatGrokBot.GrokBotCardButton, _$sSa -> ChatGrokBot.GrokBotPublishApprovalPresentation.Action;

@interface ChatGrokBot.GrokBotPublishActionRowView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton menuButton;
    Swift.Array -> ChatGrokBot.GrokBotCardButton actionButtons;
    Swift.Array -> ChatGrokBot.GrokBotPublishApprovalPresentation.Action actions;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot27GrokBotPublishActionRowView_h */
