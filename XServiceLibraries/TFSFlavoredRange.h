//
#ifndef TFSFlavoredRange_h
#define TFSFlavoredRange_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSActiveTextRange-Protocol.h"

@class NSObject, NSString;

@interface TFSFlavoredRange : NSObject <TFSActiveTextRange, NSCoding>

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeValue;
@property (readonly, nonatomic) long long rangeFlavor;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) _Bool isRangeLink;
@property (nonatomic) long long itemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)asDisplayTextRange;
- (id)init;
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value rangeFlavor:(long long)flavor displayString:(id)string;
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value rangeFlavor:(long long)flavor;
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;
- (id)activeTextRangeWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;
- (id)accessibilityText;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (long long)compare:(id)compare;

@end

#endif /* TFSFlavoredRange_h */
