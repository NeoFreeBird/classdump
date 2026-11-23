//
#ifndef TFNFormFieldAttributedFooterTextAccessoryProvider_h
#define TFNFormFieldAttributedFooterTextAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAttributedTextAccessoryProvider.h"

@interface TFNFormFieldAttributedFooterTextAccessoryProvider : TFNFormFieldAttributedTextAccessoryProvider

/* instance methods */
- (void)setFooterText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment;
- (long long)accessoryViewLocation;

@end

#endif /* TFNFormFieldAttributedFooterTextAccessoryProvider_h */
