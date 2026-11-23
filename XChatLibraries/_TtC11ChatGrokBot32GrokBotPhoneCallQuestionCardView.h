//
#ifndef _TtC11ChatGrokBot32GrokBotPhoneCallQuestionCardView_h
#define _TtC11ChatGrokBot32GrokBotPhoneCallQuestionCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCallHeaderView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotPhoneCallQuestion ?, ChatGrokBot.GrokBotPhoneCallQuestion.State, ChatGrokBot.GrokBotRoundedContainerView, ChatGrokBot.GrokBotUserForm ?, ChatGrokBot.GrokBotUserFormFieldListView, ChatGrokBot.GrokBotUserFormSubmission _$scSg ->, ChatGrokBot.GrokBotUserFormValues ?, Swift.Bool, UIView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7NSTimerCSg, _$sSo7UILabelC, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotPhoneCallQuestionCardView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel answerLabel;
    ChatGrokBot.GrokBotRoundedContainerView answerView;
    ChatGrokBot.GrokBotUserFormFieldListView fieldListView;
    ChatGrokBot.GrokBotCallHeaderView headerView;
    ChatGrokBot.GrokBotCardButton sendButton;
    ChatGrokBot.GrokBotCardButton skipButton;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
    __C.NSTimer? countdownTimer;
    ChatGrokBot.GrokBotUserForm ? form;
    Swift.Bool isAnswerInFlight;
    (() -> ())? onDismiss;
    ((Swift.Bool) -> ())? onFocus;
    ChatGrokBot.GrokBotUserFormSubmission _$scSg -> onSubmit;
    (() -> ())? onToggle;
    ChatGrokBot.GrokBotPhoneCallQuestion ? question;
    ChatGrokBot.GrokBotPhoneCallQuestion.State state;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotUserFormValues ? values;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot32GrokBotPhoneCallQuestionCardView_h */
