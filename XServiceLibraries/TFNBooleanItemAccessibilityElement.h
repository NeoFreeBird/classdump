//
#ifndef TFNBooleanItemAccessibilityElement_h
#define TFNBooleanItemAccessibilityElement_h
@import Foundation;

#include "TFNBooleanItem.h"

@class NSDictionary, UIAccessibilityElement;

@interface TFNBooleanItemAccessibilityElement : UIAccessibilityElement

@property (retain, nonatomic) TFNBooleanItem *item;
@property (retain, nonatomic) NSDictionary *options;

/* instance methods */
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInContainerSpace;
- (_Bool)accessibilityActivate;

@end

#endif /* TFNBooleanItemAccessibilityElement_h */
