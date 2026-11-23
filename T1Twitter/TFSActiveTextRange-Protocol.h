//
#ifndef TFSActiveTextRange_Protocol_h
#define TFSActiveTextRange_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSActiveTextRange <NSObject, NSCopying>

@required

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeValue;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) _Bool isRangeLink;
@property (nonatomic) long long itemIndex;

/* required instance methods */
- (id)activeTextRangeWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;
- (id)activeTextRangeWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value;

@optional

/* optional instance methods */
- (id)accessibilityText;
- (id)accessibilityHint;
- (id)behavioralEventsTweetEntity;

@end

#endif /* TFSActiveTextRange_Protocol_h */
