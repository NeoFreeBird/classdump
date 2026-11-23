//
#ifndef _TtC11ChatGrokBot27GrokBotPublishSlugFieldView_h
#define _TtC11ChatGrokBot27GrokBotPublishSlugFieldView_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class UIView, _$sSo11UITextFieldC, _$sSo6UIViewC, _$sSo7UILabelC, _$sySScSg, _$sySbcSg;

@interface ChatGrokBot.GrokBotPublishSlugFieldView : UIView <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onFocus;
    __C.UILabel captionLabel;
    __C.UIView fieldView;
    __C.UILabel suffixLabel;
    __C.UITextField textField;
    ((Swift.String) -> ())? onChange;
}

/* instance methods */
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;
- (void)didChangeText;

@end

#endif /* _TtC11ChatGrokBot27GrokBotPublishSlugFieldView_h */
