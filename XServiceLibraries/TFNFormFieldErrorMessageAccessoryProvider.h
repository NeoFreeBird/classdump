//
#ifndef TFNFormFieldErrorMessageAccessoryProvider_h
#define TFNFormFieldErrorMessageAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAccessoryProvider.h"

@interface TFNFormFieldErrorMessageAccessoryProvider : TFNFormFieldAccessoryProvider

/* instance methods */
- (id)errorMessageForFormFieldView:(id)view;
- (void)setErrorMessage:(id)message forFormFieldView:(id)view;
- (id)accessoryView;
- (long long)accessoryViewLocation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForAccessoryView:(id)view textFieldEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (_Bool)shouldShowAccessoryView:(id)view forText:(id)text;
- (struct CGSize { double x0; double x1; })sizeForAccessoryView:(id)view thatFitsSize:(struct CGSize { double x0; double x1; })size text:(id)text layoutMetrics:(id)metrics;
- (void)updateAccessoryView:(id)view inFormFieldView:(id)view withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds contentOffset:(struct CGPoint { double x0; double x1; })offset;

@end

#endif /* TFNFormFieldErrorMessageAccessoryProvider_h */
