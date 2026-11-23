//
#ifndef _TtC11ChatGrokBot31GrokBotPhoneCallContextCardView_h
#define _TtC11ChatGrokBot31GrokBotPhoneCallContextCardView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class ChatGrokBot.GrokBotCallHeaderView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotRoundedContainerView, Swift.Bool, UIView, _$sSo10UITextViewC, _$sSo7UILabelC, _$sySScSg, _$sySb_SStcSg, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotPhoneCallContextCardView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton cancelButton;
    __C.UILabel contextLabel;
    ChatGrokBot.GrokBotRoundedContainerView contextView;
    ChatGrokBot.GrokBotCallHeaderView headerView;
    ChatGrokBot.GrokBotCardButton sendButton;
    __C.UILabel subtitleLabel;
    __C.UITextView textView;
    __C.UILabel titleLabel;
    Swift.Bool isAnswerInFlight;
    ((Swift.Bool, Swift.String) -> ())? onAnswer;
    ((Swift.String) -> ())? onEdit;
    ((Swift.Bool) -> ())? onFocus;
    (() -> ())? onToggle;
}

/* instance methods */
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (void)textViewDidEndEditing:(id)editing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot31GrokBotPhoneCallContextCardView_h */
