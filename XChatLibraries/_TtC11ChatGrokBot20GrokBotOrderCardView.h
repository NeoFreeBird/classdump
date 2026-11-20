//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotOrderCardView_h
#define _TtC11ChatGrokBot20GrokBotOrderCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotOrder.Presentation ?, ChatGrokBot.GrokBotOrderFieldRowView ?, ChatGrokBot.GrokBotOrderGiftView, ChatGrokBot.GrokBotOrderItemSummaryView, ChatGrokBot.GrokBotOrderPaymentView, ChatGrokBot.GrokBotOrderResultRowView, UIView, _$sSa -> ChatGrokBot.GrokBotOrderAmountRowView, _$sSa -> ChatGrokBot.GrokBotOrderItemRowView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotOrderCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton cancelButton;
    ChatGrokBot.GrokBotOrderGiftView giftView;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotOrderItemSummaryView itemSummaryView;
    ChatGrokBot.GrokBotCardButton payButton;
    ChatGrokBot.GrokBotOrderPaymentView paymentView;
    __C.UILabel reasonLabel;
    ChatGrokBot.GrokBotOrderResultRowView resultRowView;
    __C.UILabel shipToLabel;
    __C.UILabel statusLabel;
    __C.UIView ruleView;
    ChatGrokBot.GrokBotOrderFieldRowView ? $__lazy_storage_$_giftRowView;
    ChatGrokBot.GrokBotOrderFieldRowView ? $__lazy_storage_$_payWithRowView;
    ChatGrokBot.GrokBotOrderFieldRowView ? $__lazy_storage_$_shipToRowView;
    Swift.Array -> ChatGrokBot.GrokBotOrderAmountRowView amountRowViews;
    Swift.Array -> ChatGrokBot.GrokBotOrderItemRowView itemRowViews;
    ChatGrokBot.GrokBotOrder.Presentation ? presentation;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotOrderCardView_h */
