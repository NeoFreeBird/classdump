//
#ifndef TFNFormFieldAttributedHeaderTextAccessoryProvider_h
#define TFNFormFieldAttributedHeaderTextAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAttributedTextAccessoryProvider.h"

@interface TFNFormFieldAttributedHeaderTextAccessoryProvider : TFNFormFieldAttributedTextAccessoryProvider

/* instance methods */
- (void)setAttributedTitleText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges;
- (void)setTitleText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment;
- (void)setSubtitleText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment;

@end

#endif /* TFNFormFieldAttributedHeaderTextAccessoryProvider_h */
