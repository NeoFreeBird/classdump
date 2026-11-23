//
#ifndef TFNFormFieldAttributedLabelTextAccessoryProvider_h
#define TFNFormFieldAttributedLabelTextAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAttributedTextAccessoryProvider.h"

@interface TFNFormFieldAttributedLabelTextAccessoryProvider : TFNFormFieldAttributedTextAccessoryProvider

/* instance methods */
- (void)setLabelText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment;
- (long long)accessoryViewLocation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForAccessoryView:(id)view;

@end

#endif /* TFNFormFieldAttributedLabelTextAccessoryProvider_h */
