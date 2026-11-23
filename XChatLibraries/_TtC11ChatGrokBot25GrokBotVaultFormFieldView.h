//
#ifndef _TtC11ChatGrokBot25GrokBotVaultFormFieldView_h
#define _TtC11ChatGrokBot25GrokBotVaultFormFieldView_h
@import Foundation;

@class ChatGrokBot.GrokBotVaultFormField, UIView, _$s13XDesignSystem5InputCMn, _$sSSSg, _$sSo11UIStackViewC, _$sSo6UIViewCSg, _$sSo7UILabelC, _$sySScSg;

@interface ChatGrokBot.GrokBotVaultFormFieldView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onTextChanged;
    __C.UIView? accessoryView;
    Swift.String? hint;
    Swift.String? problem;
    __C.UILabel errorLabel;
    __C.UILabel hintLabel;
    __C.UIStackView stackView;
    __C.UILabel titleLabel;
    __C.UIStackView titleStackView;
    ChatGrokBot.GrokBotVaultFormField field;
    nominal type descriptor for XDesignSystem.Input input;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot25GrokBotVaultFormFieldView_h */
