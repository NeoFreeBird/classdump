//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusBodySelectableContentTextViewActiveRangeAccessibilityElement_h
#define TTAStatusBodySelectableContentTextViewActiveRangeAccessibilityElement_h
@import Foundation;

#include "TFSActiveTextRange-Protocol.h"

@class UIAccessibilityElement;

@interface TTAStatusBodySelectableContentTextViewActiveRangeAccessibilityElement : UIAccessibilityElement

@property (retain, nonatomic) id <TFSActiveTextRange> activeRange;
@property (copy, nonatomic) id /* block */ accessibilityActivateBlock;

/* instance methods */
- (_Bool)accessibilityActivate;

@end

#endif /* TTAStatusBodySelectableContentTextViewActiveRangeAccessibilityElement_h */
