//
#ifndef _TtC8PaymentsP33_31691445165D682845FF42E25294C58A33MoneyLikeTransferToastContentView_h
#define _TtC8PaymentsP33_31691445165D682845FF42E25294C58A33MoneyLikeTransferToastContentView_h
@import Foundation;

#include "TFNToastContentViewDelegate-Protocol.h"
#include "TFNToastContentViewable-Protocol.h"
#include "TFNToastViewModel-Protocol.h"

@class UIView;

@interface Payments.(MoneyLikeTransferToastContentView in _31691445165D682845FF42E25294C58A) : UIView <TFNToastContentViewable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 transferToast;
    @40@0:8:16@24@32 stackView;
    @40@0:8:16@24@32 iconView;
    @40@0:8:16@24@32 messageLabel;
    @40@0:8:16@24@32 actionButton;
}

@property (nonatomic, readonly) id <TFNToastViewModel> toast;
@property (nonatomic, weak) id <TFNToastContentViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toast:(id)toast;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didPresentContentViewWithInterval:(double)interval;
- (void)actionButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC8PaymentsP33_31691445165D682845FF42E25294C58A33MoneyLikeTransferToastContentView_h */
