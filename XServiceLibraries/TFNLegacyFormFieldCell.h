//
#ifndef TFNLegacyFormFieldCell_h
#define TFNLegacyFormFieldCell_h
@import Foundation;

#include "TFNFormFieldPinCodeInputView.h"
#include "TFNLegacyFormBaseCell.h"
#include "TFNLegacyFormField.h"
#include "TFNLegacyFormFieldCellDelegate-Protocol.h"
#include "TFNLegacyFormFieldErrorView.h"
#include "TFNLegacyFormFieldSupplementaryTextView.h"
#include "TFNLegacyFormMultiLineTextField.h"
#include "TFNLegacyFormTextField.h"
#include "TFNLegacyFormTextInput-Protocol.h"
#include "TFNLegacyFormTextInputCustomizationDelegate-Protocol.h"
#include "TFNTextTooltipContentView.h"
#include "TFNTooltip.h"
#include "UIPickerViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView;

@interface TFNLegacyFormFieldCell : TFNLegacyFormBaseCell <UITextFieldDelegate, UITextViewDelegate, UIPickerViewDelegate, TFNLegacyFormTextInputCustomizationDelegate> {
    /* instance variables */
    NSString *_previousErrorMessage;
    UIImageView *_disclosureView;
}

@property (retain, nonatomic) TFNFormFieldPinCodeInputView *pinCodeInputView;
@property (retain, nonatomic) TFNLegacyFormTextField *singleLineTextField;
@property (retain, nonatomic) TFNLegacyFormMultiLineTextField *multiLineTextField;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UITapGestureRecognizer *textFieldFocusGestureRecognizer;
@property (retain, nonatomic) TFNTextTooltipContentView *tooltipContentView;
@property (retain, nonatomic) TFNTooltip *tooltip;
@property (nonatomic) double proposedTitleWidth;
@property (readonly, nonatomic) UIView<TFNLegacyFormTextInput> *textField;
@property (readonly, nonatomic) TFNLegacyFormFieldSupplementaryTextView *supplementaryTextView;
@property (readonly, nonatomic) TFNLegacyFormFieldErrorView *errorView;
@property (readonly, nonatomic) CAShapeLayer *arrowLayer;
@property (readonly, nonatomic) _Bool hasInlineTitle;
@property (readonly, nonatomic) _Bool shouldHighlightWhileEditing;
@property (nonatomic) _Bool showingError;
@property (readonly, nonatomic) TFNLegacyFormField *formField;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedNSRange;
@property (weak, nonatomic) id <TFNLegacyFormFieldCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellForCollectionView:(id)view withItem:(id)item appearance:(id)appearance options:(id)options indexPath:(id)path delegate:(id)delegate;
+ (double)heightForFormField:(id)field withWidth:(double)width appearance:(id)appearance layoutMetrics:(id)metrics;
+ (double)_heightForFormField:(id)field withWidth:(double)width appearance:(id)appearance layoutMetrics:(id)metrics permanentContentOnly:(_Bool)only;
+ (double)titleWidthForFormField:(id)field;
+ (double)errorArrowOffsetWithLayoutMetrics:(id)metrics;
+ (double)combiningWidthForFormField:(id)field containerWidth:(double)width layoutMetrics:(id)metrics;
+ (Class)private_textFieldClassForFormField:(id)field;
+ (_Bool)private_hasStackedTitleForFormField:(id)field;
+ (double)private_heightForStackedTitle;

/* instance methods */
- (double)heightOfPermanentContentForLayoutMetrics:(id)metrics;
- (id)disclosureView;
- (void)setAppearance:(id)appearance;
- (void)setFormItem:(id)item;
- (double)titleWidthForContentWidth:(double)width;
- (_Bool)canHighlight;
- (_Bool)combinesWithNextCell;
- (void)_formFieldDidUpdateValidity:(id)validity;
- (void)replaceNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })nsrange withText:(id)text;
- (void)_textFieldTextDidChange:(id)change;
- (void)_textDidChangeForTextField:(id)field;
- (void)_updateSupplementaryTextViewVisibilityAnimated:(_Bool)animated;
- (void)_userInputDidUpdate;
- (void)_shouldSuggestUserInput;
- (void)_dependedOnFormFieldInputDidChange;
- (id)private_backgroundColorForWarning:(_Bool)warning;
- (void)private_prepareTooltipForWarning:(_Bool)warning;
- (void)private_prepareErrorViewForWarning:(_Bool)warning;
- (_Bool)private_shouldShowSupplementaryTextView;
- (_Bool)private_usesDatePickerInputView;
- (void)_animateToShowError:(_Bool)error;
- (void)layoutContentWithMetrics:(id)metrics;
- (void)layoutAccessoryViewWithMetrics:(id)metrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame adjustedForAccessoryViewWithLayoutMetrics:(id)metrics;
- (void)_layoutErrorViewWithMetrics:(id)metrics;
- (void)_layoutArrowLayerWithMetrics:(id)metrics;
- (void)private_announceInvalidInput;
- (void)private_clearButtonTapped:(id)tapped;
- (void)dealloc;
- (id)accessibilityLabel;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (id)private_baseAccessibilityLabel;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;
- (void)updateBackgroundImageForSectionBreaks:(unsigned long long)breaks highlighted:(_Bool)highlighted layoutMetrics:(id)metrics;
- (void)formTextInputDidChangeText:(id)text fromUserInteraction:(_Bool)interaction;
- (void)formTextInput:(id)input clearButtonBoundsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChange:(id)change;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (_Bool)isShowingError;

@end

#endif /* TFNLegacyFormFieldCell_h */
