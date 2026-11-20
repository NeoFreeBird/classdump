//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot36GrokBotVoiceCallTranscriptHeaderView_h
#define _TtC11ChatGrokBot36GrokBotVoiceCallTranscriptHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotBadgeRowView, ChatGrokBot.GrokBotHostingView, GrokBotMark.GrokBotMark.State, GrokBotRelay.SandAgentSummary ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotVoiceCallTranscriptHeaderView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat topInset;
    ChatGrokBot.GrokBotHostingView avatarView;
    ChatGrokBot.GrokBotBadgeRowView badgeRowView;
    GrokBotMark.GrokBotMark.State markState;
    GrokBotRelay.SandAgentSummary ? summary;
    __C.UILabel durationLabel;
    __C.UILabel nameLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot36GrokBotVoiceCallTranscriptHeaderView_h */
