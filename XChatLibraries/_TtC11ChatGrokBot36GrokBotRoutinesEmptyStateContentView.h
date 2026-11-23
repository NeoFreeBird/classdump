//
#ifndef _TtC11ChatGrokBot36GrokBotRoutinesEmptyStateContentView_h
#define _TtC11ChatGrokBot36GrokBotRoutinesEmptyStateContentView_h
@import Foundation;

@class ChatUI.ChatEmptyStateView, UIView, _$s13XDesignSystem6ButtonCMn ?, _$syycSg;

@interface ChatGrokBot.GrokBotRoutinesEmptyStateContentView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onAction;
    nominal type descriptor for XDesignSystem.Button ? actionButton;
    ChatUI.ChatEmptyStateView emptyStateView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot36GrokBotRoutinesEmptyStateContentView_h */
