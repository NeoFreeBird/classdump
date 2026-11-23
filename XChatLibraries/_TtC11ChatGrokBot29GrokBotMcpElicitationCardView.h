//
#ifndef _TtC11ChatGrokBot29GrokBotMcpElicitationCardView_h
#define _TtC11ChatGrokBot29GrokBotMcpElicitationCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotCardTextActionView, ChatGrokBot.GrokBotMcpElicitationAsk ?, ChatGrokBot.GrokBotUserFormFieldListView, ChatGrokBot.GrokBotUserFormValues ?, Swift.Bool, UIView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC, _$sySDyS2SGcSg, _$sySScSg, _$sySbcSg;

@interface ChatGrokBot.GrokBotMcpElicitationCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton declineButton;
    ChatGrokBot.GrokBotUserFormFieldListView fieldListView;
    ChatGrokBot.GrokBotCardTextActionView fullRequestToggle;
    __C.UILabel messageLabel;
    __C.UILabel problemLabel;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton submitButton;
    __C.UILabel titleLabel;
    __C.UILabel toolLabel;
    ChatGrokBot.GrokBotMcpElicitationAsk ? ask;
    Swift.Bool isAnswerInFlight;
    ((Swift.Bool) -> ())? onFocus;
    ((Swift.String) -> ())? onSubmit;
    (([Swift.String : Swift.String]) -> ())? onValuesChange;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotUserFormValues ? values;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot29GrokBotMcpElicitationCardView_h */
