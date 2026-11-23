//
#ifndef _TtC11ChatGrokBot19GrokBotCartPillView_h
#define _TtC11ChatGrokBot19GrokBotCartPillView_h
@import Foundation;

@class ChatGrokBot.GrokBotCartPillViewListener ?, ChatGrokBot.GrokBotCartStore, Swift.Bool, UIView, _$s13XDesignSystem6ButtonCMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo28UISelectionFeedbackGeneratorC;

@interface ChatGrokBot.GrokBotCartPillView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCartPillViewListener ? listener;
    Swift.Bool isVisible;
    nominal type descriptor for XDesignSystem.Button button;
    ChatGrokBot.GrokBotCartStore cart;
    __C.UISelectionFeedbackGenerator selectionFeedback;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? lingerTask;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot19GrokBotCartPillView_h */
