//
#ifndef TFSTwitterDisplayTextEntityRange_h
#define TFSTwitterDisplayTextEntityRange_h
@import Foundation;

#include "TFSTwitterDisplayTextRange.h"
#include "TFSTwitterTextRange-Protocol.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityRange : TFSTwitterDisplayTextRange // (Swift)

@property (nonatomic, readonly) id <TFSTwitterTextRange> textRange;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)displayTextRangeWithRangeInDisplayText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })text;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityRange_h */
