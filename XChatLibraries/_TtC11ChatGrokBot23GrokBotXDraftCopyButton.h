//
#ifndef _TtC11ChatGrokBot23GrokBotXDraftCopyButton_h
#define _TtC11ChatGrokBot23GrokBotXDraftCopyButton_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$syycSg;

@interface ChatGrokBot.GrokBotXDraftCopyButton : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton button;
    nominal type descriptor for Dispatch.DispatchWorkItem ? copiedResetWorkItem;
    (() -> ())? onCopy;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotXDraftCopyButton_h */
