//
#ifndef _TtC14TwitterRewards22TermsAndConditionsView_h
#define _TtC14TwitterRewards22TermsAndConditionsView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class TwitterRewards.TermsAndConditionsRowAdapterDelegate ?, TwitterRewards.TermsAndConditionsViewModel ?, UIView, _$sSo21TFNAttributedTextViewCSg;

@interface TwitterRewards.TermsAndConditionsView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    TwitterRewards.TermsAndConditionsRowAdapterDelegate ? delegate;
    TwitterRewards.TermsAndConditionsViewModel ? viewModel;
    __C.TFNAttributedTextView? $__lazy_storage_$_termsAndConditionsTextView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC14TwitterRewards22TermsAndConditionsView_h */
