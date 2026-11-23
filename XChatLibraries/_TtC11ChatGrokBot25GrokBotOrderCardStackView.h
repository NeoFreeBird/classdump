//
#ifndef _TtC11ChatGrokBot25GrokBotOrderCardStackView_h
#define _TtC11ChatGrokBot25GrokBotOrderCardStackView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardSurfaceView, ChatGrokBot.GrokBotCardSurfaceView ?, ChatGrokBot.GrokBotOrderAutoApproveBlockView, ChatGrokBot.GrokBotOrderAutoApproveNoteView, UIView;

@interface ChatGrokBot.GrokBotOrderCardStackView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardSurfaceView surfaceView;
    ChatGrokBot.GrokBotOrderAutoApproveBlockView blockView;
    ChatGrokBot.GrokBotOrderAutoApproveNoteView noteView;
    ChatGrokBot.GrokBotCardSurfaceView ? $__lazy_storage_$_blockSurfaceView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotOrderCardStackView_h */
