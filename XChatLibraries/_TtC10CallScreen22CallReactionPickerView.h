//
#ifndef _TtC10CallScreen22CallReactionPickerView_h
#define _TtC10CallScreen22CallReactionPickerView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView, _$sSa -> CallScreen.CallReactionPickerItemButton, _$sSo12UIScrollViewC, _$sySScSg, _$syycSg;

@interface CallScreen.CallReactionPickerView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? didSelectEmoji;
    (() -> ())? didRequestDismiss;
    __C.UIScrollView scrollView;
    Swift.Array -> CallScreen.CallReactionPickerItemButton itemButtons;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)accessibilityPerformEscape;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)selectEmoji:(id)emoji;
- (void)requestDismiss;

@end

#endif /* _TtC10CallScreen22CallReactionPickerView_h */
