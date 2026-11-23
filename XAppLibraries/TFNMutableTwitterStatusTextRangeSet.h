//
#ifndef TFNMutableTwitterStatusTextRangeSet_h
#define TFNMutableTwitterStatusTextRangeSet_h
@import Foundation;

#include "TFNTwitterStatusTextRangeSet.h"

@interface TFNMutableTwitterStatusTextRangeSet : TFNTwitterStatusTextRangeSet

/* instance methods */
- (void)setDisplayTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)adjustRangesToStringIndexesWithText:(id)text;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNMutableTwitterStatusTextRangeSet_h */
