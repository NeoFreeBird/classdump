//
#ifndef _TtC11ChatGrokBot23GrokBotAppSecretRowView_h
#define _TtC11ChatGrokBot23GrokBotAppSecretRowView_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class ChatGrokBot.GrokBotSecureTextField, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotAppSecretRowView : UIView <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat nameWidth;
    (() -> ())? onChange;
    ((Swift.Bool) -> ())? onFocus;
    (() -> ())? onReturn;
    __C.UIView fieldView;
    __C.UILabel nameLabel;
    ChatGrokBot.GrokBotSecureTextField secretField;
    __C.UILabel setLabel;
    __C.UIImageView setMarkView;
    Swift.Bool isRefused;
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
- (void)didEditValue;

@end

#endif /* _TtC11ChatGrokBot23GrokBotAppSecretRowView_h */
