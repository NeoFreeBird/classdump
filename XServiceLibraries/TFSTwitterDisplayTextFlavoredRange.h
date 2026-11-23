//
#ifndef TFSTwitterDisplayTextFlavoredRange_h
#define TFSTwitterDisplayTextFlavoredRange_h
@import Foundation;

#include "TFSFlavoredRange.h"
#include "TFSTwitterDisplayTextRange.h"

@class NSString;

@interface TFSTwitterDisplayTextFlavoredRange : TFSTwitterDisplayTextRange // (Swift)

@property (nonatomic, readonly) TFSFlavoredRange *flavoredRange;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithFlavoredRange:(id)range;
- (id)displayTextRangeWithRangeInDisplayText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })text;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextFlavoredRange_h */
