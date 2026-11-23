//
#ifndef TFNFormFieldVisibilityButtonAccessoryProvider_h
#define TFNFormFieldVisibilityButtonAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAccessoryProvider.h"

@interface TFNFormFieldVisibilityButtonAccessoryProvider : TFNFormFieldAccessoryProvider

/* instance methods */
- (id)accessoryViewForFormFieldView:(id)view;
- (id)accessoryView;
- (long long)accessoryViewLocation;
- (struct CGSize { double x0; double x1; })sizeForAccessoryView:(id)view thatFitsSize:(struct CGSize { double x0; double x1; })size text:(id)text layoutMetrics:(id)metrics;
- (void)private_eyeButtonTapped:(id)tapped;
- (void)private_updateAccessoryView:(id)view formFormFieldView:(id)view;

@end

#endif /* TFNFormFieldVisibilityButtonAccessoryProvider_h */
