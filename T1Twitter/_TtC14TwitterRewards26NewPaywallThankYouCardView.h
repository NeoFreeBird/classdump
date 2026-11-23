//
#ifndef _TtC14TwitterRewards26NewPaywallThankYouCardView_h
#define _TtC14TwitterRewards26NewPaywallThankYouCardView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class TwitterRewards.NewPaywallThankYouCardViewDelegate ?, UIView, _$sSo11UIStackViewCSg, _$sSo11UITextFieldCSg, _$sSo19TFNCheckmarkControlCSg, _$sSo21TFNAttributedTextViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterRewards.NewPaywallThankYouCardView : UIView <TFNAttributedTextViewDelegate, UITextFieldDelegate> { // (Swift)
    /* instance variables */
    TwitterRewards.NewPaywallThankYouCardViewDelegate ? delegate;
    __C.UIView? $__lazy_storage_$_cardView;
    __C.UILabel? $__lazy_storage_$_welcomeNoteLabel;
    __C.TFNCheckmarkControl? $__lazy_storage_$_checkmarkControl;
    __C.UILabel? $__lazy_storage_$_consentLabel;
    __C.UIStackView? $__lazy_storage_$_consentStackView;
    __C.UILabel? $__lazy_storage_$_emailLabel;
    __C.UITextField? $__lazy_storage_$_emailTextField;
    __C.UIView? $__lazy_storage_$_emailContainerView;
    __C.UIView? $__lazy_storage_$_emailDividerView;
    __C.TFNAttributedTextView? $__lazy_storage_$_legalTextView;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleCheckmarkChanged;
- (void)emailTextDidChange;

@end

#endif /* _TtC14TwitterRewards26NewPaywallThankYouCardView_h */
