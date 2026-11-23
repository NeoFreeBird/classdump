//
#ifndef _TtC7Profile18MiniProfileBioView_h
#define _TtC7Profile18MiniProfileBioView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class UIView, _$sSo21TFNAttributedTextViewC, _$sySo18TFSActiveTextRange_pcSg;

@interface Profile.MiniProfileBioView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    ((__C.TFSActiveTextRange) -> ())? onTapActiveRange;
    __C.TFNAttributedTextView textView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC7Profile18MiniProfileBioView_h */
