//
#ifndef _TtC11ChatGrokBot30GrokBotPlacesMapEmptyStateView_h
#define _TtC11ChatGrokBot30GrokBotPlacesMapEmptyStateView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotPlacesMapEmptyStateView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onReset;
    ChatGrokBot.GrokBotCardButton resetButton;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotPlacesMapEmptyStateView_h */
