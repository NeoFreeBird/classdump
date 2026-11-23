//
#ifndef TFNFormFieldPinCodeInputView_h
#define TFNFormFieldPinCodeInputView_h
@import Foundation;

#include "TFNFormFieldAppearance.h"
#include "TFNFormFieldPinCodeInputViewTextField.h"
#include "TFNFormFieldTextEntryView-Protocol.h"
#include "TFNLegacyFormField.h"
#include "TFNLegacyFormTextInput-Protocol.h"
#include "TFNLegacyFormTextInputCustomizationDelegate-Protocol.h"
#include "TFNTappableHighlightView.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIFont, UITextInputPasswordRules, UITextRange, UIView;

@interface TFNFormFieldPinCodeInputView : UIView <UITextFieldDelegate, TFNFormFieldTextEntryView, TFNLegacyFormTextInput> {
    /* instance variables */
    NSMutableArray *_buttons;
    NSMutableArray *_borders;
    TFNFormFieldPinCodeInputViewTextField *_textField;
    TFNTappableHighlightView *_textFieldCover;
    UIFont *_font;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) long long displayedLines;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) _Bool secureTextEntry;
@property (nonatomic) _Bool textEditable;
@property (retain, nonatomic) TFNFormFieldAppearance *appearance;
@property (retain, nonatomic) NSString *textContentType;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UIView *inputView;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (retain, nonatomic) TFNLegacyFormField *formField;
@property (readonly, nonatomic) UITextRange *selectedTextRange;
@property (weak, nonatomic) id <TFNLegacyFormTextInputCustomizationDelegate> customizationDelegate;

/* class methods */
+ (double)standardHeightForLayoutMetrics:(id)metrics emphasized:(_Bool)emphasized stacked:(_Bool)stacked;

/* instance methods */
- (id)initWithNumberOfCharacters:(long long)characters;
- (void)layoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)isSecureTextEntry;
- (_Bool)isTextEditable;
- (double)minimumVisibleHeightFromBottom:(_Bool)bottom;
- (void)setLegacyTextInputDelegate:(id)delegate;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics displayedLines:(long long)lines;
- (void)updateTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRectInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds stacked:(_Bool)stacked;
- (double)baselineYForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)position;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textFieldShouldReturn:(id)_return;
- (double)private_characterWidthPlusSpacing;
- (double)private_characterWidth;
- (double)private_characterSpacing;
- (void)private_updateForTextChange;
- (void)private_updateBorderColors;
- (void)private_textDidChange;
- (id)private_pastableString;
- (void)private_showPasteMenu;
- (void)private_paste;

@end

#endif /* TFNFormFieldPinCodeInputView_h */
