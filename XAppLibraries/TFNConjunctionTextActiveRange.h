//
#ifndef TFNConjunctionTextActiveRange_h
#define TFNConjunctionTextActiveRange_h
@import Foundation;

@class TFSFlavoredRange;

@interface TFNConjunctionTextActiveRange : TFSFlavoredRange

/* instance methods */
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value rangeFlavor:(long long)flavor displayString:(id)string;
- (id)initWithDisplayString:(id)string displayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFNConjunctionTextActiveRange_h */
