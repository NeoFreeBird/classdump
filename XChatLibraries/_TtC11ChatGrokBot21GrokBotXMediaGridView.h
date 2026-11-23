//
#ifndef _TtC11ChatGrokBot21GrokBotXMediaGridView_h
#define _TtC11ChatGrokBot21GrokBotXMediaGridView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotCardButton, _$sSa -> ChatUI.ChatRemoteImageView, _$sSi;

@interface ChatGrokBot.GrokBotXMediaGridView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> ChatUI.ChatRemoteImageView imageViews;
    Swift.Array -> ChatGrokBot.GrokBotCardButton removeButtons;
    Swift.Int count;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot21GrokBotXMediaGridView_h */
