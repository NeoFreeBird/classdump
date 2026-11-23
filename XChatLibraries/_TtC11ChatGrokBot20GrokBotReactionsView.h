//
#ifndef _TtC11ChatGrokBot20GrokBotReactionsView_h
#define _TtC11ChatGrokBot20GrokBotReactionsView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotReactionPillView, _$sSaySSG, _$syycSg;

@interface ChatGrokBot.GrokBotReactionsView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onLongPress;
    Swift.Array -> ChatGrokBot.GrokBotReactionPillView pillViews;
    [Swift.String] reactions;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didLongPress:(id)press;

@end

#endif /* _TtC11ChatGrokBot20GrokBotReactionsView_h */
