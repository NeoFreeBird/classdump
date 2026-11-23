//
#ifndef _TtC12XVideoEditor35VideoEditorCaptionsGrokResponseView_h
#define _TtC12XVideoEditor35VideoEditorCaptionsGrokResponseView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class UIView, _$sSo10UITextViewC, _$sSo11UIImageViewC;

@interface XVideoEditor.VideoEditorCaptionsGrokResponseView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    __C.UIImageView _icon;
    __C.UITextView _textView;
}

/* instance methods */
- (id)textView:(id)view editMenuForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC12XVideoEditor35VideoEditorCaptionsGrokResponseView_h */
