//
#ifndef _TtC11ChatGrokBot31GrokBotMessageViewerTextRunView_h
#define _TtC11ChatGrokBot31GrokBotMessageViewerTextRunView_h
@import Foundation;

@class ChatGrokBot.GrokBotDetectedTextView, UIView, _$sSa -> ChatGrokBot.GrokBotMessageViewerTextRunView.Decoration, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotMessageViewerTextRunView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotDetectedTextView textView;
    __C.UIEdgeInsets contentInsets;
    Swift.Array -> ChatGrokBot.GrokBotMessageViewerTextRunView.Decoration decorations;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot31GrokBotMessageViewerTextRunView_h */
