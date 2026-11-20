//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
