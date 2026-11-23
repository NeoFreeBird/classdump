//
#ifndef TFSStringSpanSequence_h
#define TFSStringSpanSequence_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSObject;

@interface TFSStringSpanSequence : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *allSpans;
@property (readonly, nonatomic) NSArray *sortedSpans;
@property (readonly, nonatomic) NSArray *variableSpans;
@property (readonly, nonatomic) NSArray *linkSpans;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithSpans:(id)spans;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToStringSpanSequence:(id)sequence;
- (unsigned long long)hash;
- (id)description;
- (id)spansOfType:(long long)type;
- (id)rangeValuesOfSpansNamed:(id)named;
- (id)renamingSpansWithBlock:(id /* block */)block;
- (id)renamingSpansWithDictionary:(id)dictionary;

@end

#endif /* TFSStringSpanSequence_h */
