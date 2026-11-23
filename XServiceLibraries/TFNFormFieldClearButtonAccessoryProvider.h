//
#ifndef TFNFormFieldClearButtonAccessoryProvider_h
#define TFNFormFieldClearButtonAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAccessoryProvider.h"

@interface TFNFormFieldClearButtonAccessoryProvider : TFNFormFieldAccessoryProvider

/* instance methods */
- (id)accessoryView;
- (long long)accessoryViewLocation;
- (_Bool)shouldShowAccessoryView:(id)view forText:(id)text;
- (struct CGSize { double x0; double x1; })sizeForAccessoryView:(id)view thatFitsSize:(struct CGSize { double x0; double x1; })size text:(id)text layoutMetrics:(id)metrics;
- (void)updateAccessoryView:(id)view inFormFieldView:(id)view withText:(id)text;
- (void)private_clearButtonTapped:(id)tapped;

@end

#endif /* TFNFormFieldClearButtonAccessoryProvider_h */
