//
#ifndef _TtC14TwitterRewards16EmailSharingView_h
#define _TtC14TwitterRewards16EmailSharingView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class TwitterRewards.EmailSharingRowAdapterDelegate ?, TwitterRewards.EmailSharingViewModel ?, UIView, _$sSo11UIStackViewCSg, _$sSo12TFNTextFieldCSg, _$sSo19TFNCheckmarkControlCSg, _$sSo21TFNAttributedTextViewCSg, _$sSo6UIViewC, _$sSo7UILabelCSg;

@interface TwitterRewards.EmailSharingView : UIView <TFNAttributedTextViewDelegate, UITextFieldDelegate> { // (Swift)
    /* instance variables */
    TwitterRewards.EmailSharingRowAdapterDelegate ? delegate;
    TwitterRewards.EmailSharingViewModel ? viewModel;
    __C.TFNCheckmarkControl? $__lazy_storage_$_checkmarkControl;
    __C.TFNAttributedTextView? $__lazy_storage_$_emailSharingTextView;
    __C.UIStackView? $__lazy_storage_$_consentStackView;
    __C.TFNTextField? $__lazy_storage_$_emailTextField;
    __C.UILabel? $__lazy_storage_$_emailLabel;
    __C.UIStackView? $__lazy_storage_$_emailStackView;
    __C.UIView emailDividerView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)handleTapConsentCheckmark;
- (id)initWithCoder:(id)coder;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;

@end

#endif /* _TtC14TwitterRewards16EmailSharingView_h */
