//
#ifndef TFNFormFieldAttributedFloatingHintTextAccessoryProvider_h
#define TFNFormFieldAttributedFloatingHintTextAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAttributedTextAccessoryProvider.h"

@interface TFNFormFieldAttributedFloatingHintTextAccessoryProvider : TFNFormFieldAttributedTextAccessoryProvider

/* instance methods */
- (void)setText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment;
- (_Bool)shouldShowAccessoryView:(id)view forText:(id)text;
- (void)updateAccessoryView:(id)view inFormFieldView:(id)view withText:(id)text;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForAccessoryView:(id)view textFieldEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* TFNFormFieldAttributedFloatingHintTextAccessoryProvider_h */
