//
#ifndef _TtC11ChatGrokBot29GrokBotPhoneCallTermsCardView_h
#define _TtC11ChatGrokBot29GrokBotPhoneCallTermsCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCallHeaderView, ChatGrokBot.GrokBotCardButton, UIView, _$s13XDesignSystem10LinkedTextCMn, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotPhoneCallTermsCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton acceptButton;
    nominal type descriptor for XDesignSystem.LinkedText agreementView;
    ChatGrokBot.GrokBotCardButton declineButton;
    ChatGrokBot.GrokBotCallHeaderView headerView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot29GrokBotPhoneCallTermsCardView_h */
