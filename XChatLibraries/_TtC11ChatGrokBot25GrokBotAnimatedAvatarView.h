//
#ifndef _TtC11ChatGrokBot25GrokBotAnimatedAvatarView_h
#define _TtC11ChatGrokBot25GrokBotAnimatedAvatarView_h
@import Foundation;

@class ChatGrokBot.GrokBotAnimatedAvatarView.Rendering ?, ChatGrokBot.GrokBotHostingView, GrokBotRelay.SandAgentSummary ?, Swift.Bool, UIView, _$s7Combine14AnyCancellableCMn ?, _$s8Dispatch0A8WorkItemCMn ?;

@interface ChatGrokBot.GrokBotAnimatedAvatarView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isSpeaking;
    ChatGrokBot.GrokBotHostingView hostingView;
    GrokBotRelay.SandAgentSummary ? summary;
    ChatGrokBot.GrokBotAnimatedAvatarView.Rendering ? rendering;
    nominal type descriptor for Combine.AnyCancellable ? summarySubscription;
    nominal type descriptor for Dispatch.DispatchWorkItem ? settledBeatRefresh;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot25GrokBotAnimatedAvatarView_h */
