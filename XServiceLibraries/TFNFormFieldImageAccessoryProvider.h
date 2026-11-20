//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFormFieldImageAccessoryProvider_h
#define TFNFormFieldImageAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAccessoryProvider.h"

@interface TFNFormFieldImageAccessoryProvider : TFNFormFieldAccessoryProvider

/* instance methods */
- (id)imageForFormFieldView:(id)view;
- (void)setImage:(id)image forFormFieldView:(id)view;
- (id)accessoryView;
- (long long)accessoryViewLocation;
- (_Bool)shouldShowAccessoryView:(id)view forText:(id)text;
- (struct CGSize { double x0; double x1; })sizeForAccessoryView:(id)view thatFitsSize:(struct CGSize { double x0; double x1; })size text:(id)text layoutMetrics:(id)metrics;

@end

#endif /* TFNFormFieldImageAccessoryProvider_h */
