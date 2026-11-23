//
#ifndef _TtC11ChatGrokBot24GrokBotAttentionPillView_h
#define _TtC11ChatGrokBot24GrokBotAttentionPillView_h
@import Foundation;

@class ChatGrokBot.GrokBotAttentionPillViewListener ?, Swift.Bool, UIView, _$s13XDesignSystem6ButtonCMn, _$sSi, _$sSo11UIStackViewC;

@interface ChatGrokBot.GrokBotAttentionPillView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAttentionPillViewListener ? listener;
    Swift.Int count;
    Swift.Bool isVisible;
    nominal type descriptor for XDesignSystem.Button dismissButton;
    nominal type descriptor for XDesignSystem.Button jumpButton;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didTapDismiss;
- (void)didTapJump;

@end

#endif /* _TtC11ChatGrokBot24GrokBotAttentionPillView_h */
