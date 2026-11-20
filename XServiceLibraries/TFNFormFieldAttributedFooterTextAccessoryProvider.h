//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
