//
#ifndef _TtC11ChatGrokBot24GrokBotFlightResultsView_h
#define _TtC11ChatGrokBot24GrokBotFlightResultsView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotFlightTabsView, UIView, _$sSa -> ChatGrokBot.GrokBotFlightOfferRowView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightResultsView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton bookButton;
    __C.UILabel bookNoteLabel;
    ChatGrokBot.GrokBotCardButton detailsButton;
    __C.UILabel metaLabel;
    ChatGrokBot.GrokBotFlightTabsView tabsView;
    __C.UILabel titleLabel;
    Swift.Array -> ChatGrokBot.GrokBotFlightOfferRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot24GrokBotFlightResultsView_h */
