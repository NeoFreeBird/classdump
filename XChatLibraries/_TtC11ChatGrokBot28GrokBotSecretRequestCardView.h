//
#ifndef _TtC11ChatGrokBot28GrokBotSecretRequestCardView_h
#define _TtC11ChatGrokBot28GrokBotSecretRequestCardView_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotSecureTextField, Swift.Bool, UIView, _$sSo6UIViewC, _$sSo7UILabelC, _$sySScSg, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotSecretRequestCardView : UIView <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    __C.UILabel descriptionLabel;
    __C.UIView fieldView;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton saveButton;
    ChatGrokBot.GrokBotSecureTextField secretField;
    Swift.Bool isAnswerInFlight;
    ((Swift.Bool) -> ())? onFocus;
    (() -> ())? onOpen;
    ((Swift.String) -> ())? onSecret;
}

/* instance methods */
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didChangeSecret;

@end

#endif /* _TtC11ChatGrokBot28GrokBotSecretRequestCardView_h */
