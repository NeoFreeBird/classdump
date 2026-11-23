//
#ifndef _TtC11ChatGrokBot24GrokBotResourcesCardView_h
#define _TtC11ChatGrokBot24GrokBotResourcesCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotResources.Tab _$scSg ->, UIView, _$sSa -> ChatGrokBot.GrokBotResourceRowView, _$sSa -> _$s13XDesignSystem6ButtonCMn, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotResourcesCardView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotCardButton retryButton;
    ChatGrokBot.GrokBotCardButton showMoreButton;
    __C.UIActivityIndicatorView spinnerView;
    __C.UILabel subtitleLabel;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button tabButtons;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotResources.Tab _$scSg -> onSelectTab;
    Swift.Array -> ChatGrokBot.GrokBotResourceRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotResourcesCardView_h */
