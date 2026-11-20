//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotTypingRowView_h
#define _TtC11ChatGrokBot20GrokBotTypingRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotAvatarHostView, ChatGrokBot.GrokBotTypingBubbleView, UIView, _$sSSSg, _$sSa -> GrokBotRelay.SandAgentSummary, _$sSo7NSTimerCSg;

@interface ChatGrokBot.GrokBotTypingRowView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAvatarHostView avatarHostView;
    ChatGrokBot.GrokBotTypingBubbleView bubbleView;
    Swift.Array -> GrokBotRelay.SandAgentSummary composingMembers;
    Swift.String? currentMemberID;
    __C.NSTimer? cycleTimer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotTypingRowView_h */
