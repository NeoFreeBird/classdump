//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotVoiceCallTranscriptView_h
#define _TtC11ChatGrokBot30GrokBotVoiceCallTranscriptView_h
@import Foundation;

@class ChatGrokBot.GrokBotVoiceCallTranscriptControlsView, ChatGrokBot.GrokBotVoiceCallTranscriptHeaderView, UIView, _$sSo6UIViewCSg;

@interface ChatGrokBot.GrokBotVoiceCallTranscriptView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotVoiceCallTranscriptControlsView controlsView;
    ChatGrokBot.GrokBotVoiceCallTranscriptHeaderView headerView;
    __C.UIView? contentView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot30GrokBotVoiceCallTranscriptView_h */
