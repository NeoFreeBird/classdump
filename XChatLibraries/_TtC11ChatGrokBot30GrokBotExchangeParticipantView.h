//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotExchangeParticipantView_h
#define _TtC11ChatGrokBot30GrokBotExchangeParticipantView_h
@import Foundation;

@class ChatGrokBot.GrokBotAgentCommAvatarView, ChatGrokBot.GrokBotExchangeParticipant ?, UIView, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotExchangeParticipantView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotExchangeParticipant ? participant;
    ChatGrokBot.GrokBotAgentCommAvatarView avatarView;
    __C.UILabel nameLabel;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot30GrokBotExchangeParticipantView_h */
