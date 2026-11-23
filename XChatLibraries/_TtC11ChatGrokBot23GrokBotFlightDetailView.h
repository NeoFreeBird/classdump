//
#ifndef _TtC11ChatGrokBot23GrokBotFlightDetailView_h
#define _TtC11ChatGrokBot23GrokBotFlightDetailView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotFlightCheaperOptionView, ChatGrokBot.GrokBotFlightDetailFieldView ?, ChatGrokBot.GrokBotFlightDetailTotalView, ChatGrokBot.GrokBotFlightOfferDetailsView, UIView, _$sSa -> ChatGrokBot.GrokBotFlightDetailLegView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightDetailView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton actionButton;
    __C.UILabel bookNoteLabel;
    ChatGrokBot.GrokBotCardButton cheaperBookButton;
    ChatGrokBot.GrokBotFlightCheaperOptionView cheaperView;
    ChatGrokBot.GrokBotCardButton detailsButton;
    ChatGrokBot.GrokBotFlightOfferDetailsView detailsView;
    __C.UIView dividerView;
    __C.UILabel fareNameLabel;
    __C.UILabel fareRulesLabel;
    __C.UILabel metaLabel;
    __C.UILabel titleLabel;
    ChatGrokBot.GrokBotFlightDetailTotalView totalView;
    ChatGrokBot.GrokBotFlightDetailFieldView ? $__lazy_storage_$_cheaperField;
    ChatGrokBot.GrokBotFlightDetailFieldView ? $__lazy_storage_$_fareField;
    ChatGrokBot.GrokBotFlightDetailFieldView ? $__lazy_storage_$_totalField;
    Swift.Array -> ChatGrokBot.GrokBotFlightDetailLegView legViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot23GrokBotFlightDetailView_h */
