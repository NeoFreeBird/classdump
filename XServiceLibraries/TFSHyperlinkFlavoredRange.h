//
#ifndef TFSHyperlinkFlavoredRange_h
#define TFSHyperlinkFlavoredRange_h
@import Foundation;

#include "TFSFlavoredRange.h"

@class NSString;

@interface TFSHyperlinkFlavoredRange : TFSFlavoredRange

@property (readonly, copy, nonatomic) NSString *rangeURL;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range rangeURL:(id)url displayString:(id)string;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFSHyperlinkFlavoredRange_h */
