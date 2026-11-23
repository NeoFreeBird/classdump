//
#ifndef _TtC10ShareSheet27ShareTrayLegacyComposerView_h
#define _TtC10ShareSheet27ShareTrayLegacyComposerView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class ShareSheet.ShareTrayFacepileView, Swift.Bool, UIView, _$sSo10UITextViewC, _$sSo11UIStackViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9TFNButtonC, _$sySScSg, _$syycSg;

@interface ShareSheet.ShareTrayLegacyComposerView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool hasOpaqueBackground;
    (() -> ())? didTapSend;
    ((Swift.String) -> ())? didChangeText;
    __C.UIView hairlineView;
    __C.UITextView textView;
    __C.UILabel placeholderLabel;
    __C.UIStackView sendRow;
    ShareSheet.ShareTrayFacepileView facepileView;
    __C.TFNButton sendButton;
    __C.NSLayoutConstraint? textFieldTopConstraint;
    __C.NSLayoutConstraint? textFieldBottomConstraint;
    __C.NSLayoutConstraint? sendRowBottomConstraint;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)textViewDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)handleTextZoneTap;

@end

#endif /* _TtC10ShareSheet27ShareTrayLegacyComposerView_h */
