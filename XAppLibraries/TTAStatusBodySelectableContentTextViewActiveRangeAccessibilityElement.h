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
