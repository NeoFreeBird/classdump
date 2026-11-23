//
#ifndef _TtC11ChatGrokBot24GrokBotMessageViewerView_h
#define _TtC11ChatGrokBot24GrokBotMessageViewerView_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageTextView, ChatGrokBot.GrokBotTextEntityHit _$scSg ->, UIView, _$sSo12UIScrollViewC;

@interface ChatGrokBot.GrokBotMessageViewerView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotTextEntityHit _$scSg -> onEntityTap;
    __C.UIScrollView scrollView;
    ChatGrokBot.GrokBotMessageTextView messageTextView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot24GrokBotMessageViewerView_h */
