//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotMessageTextView_h
#define _TtC11ChatGrokBot22GrokBotMessageTextView_h
@import Foundation;

@class ChatGrokBot.GrokBotDetectedTextView, ChatGrokBot.GrokBotMarkdownView, ChatGrokBot.GrokBotMessageTextView.Configuration ?, ChatGrokBot.GrokBotTextEntityHit _$scSg ->, ChatGrokBot.GrokBotTextInteractionContext, UIView, _$syycSg;

@interface ChatGrokBot.GrokBotMessageTextView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotTextInteractionContext interactionContext;
    ChatGrokBot.GrokBotTextEntityHit _$scSg -> onEntityLongPress;
    ChatGrokBot.GrokBotTextEntityHit _$scSg -> onEntityTap;
    (() -> ())? onExpand;
    ChatGrokBot.GrokBotDetectedTextView detectedTextView;
    ChatGrokBot.GrokBotMarkdownView markdownView;
    ChatGrokBot.GrokBotMessageTextView.Configuration ? configuration;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot22GrokBotMessageTextView_h */
