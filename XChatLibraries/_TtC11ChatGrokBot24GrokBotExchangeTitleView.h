//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotExchangeTitleView_h
#define _TtC11ChatGrokBot24GrokBotExchangeTitleView_h
@import Foundation;

@class ChatGrokBot.GrokBotExchangeParticipantView, ChatGrokBot.GrokBotExchangeTitleViewListener ?, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo22UITapGestureRecognizerC, __C.UIUserInterfaceStyle;

@interface ChatGrokBot.GrokBotExchangeTitleView : UIView { // (Swift)
    /* instance variables */
    __C.UIUserInterfaceStyle avatarUserInterfaceStyle;
    ChatGrokBot.GrokBotExchangeTitleViewListener ? listener;
    __C.UIImageView arrowsImageView;
    ChatGrokBot.GrokBotExchangeParticipantView ownView;
    __C.UITapGestureRecognizer ownTapGesture;
    __C.UITapGestureRecognizer peerTapGesture;
    ChatGrokBot.GrokBotExchangeParticipantView peerView;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapOwn;
- (void)didTapPeer;

@end

#endif /* _TtC11ChatGrokBot24GrokBotExchangeTitleView_h */
