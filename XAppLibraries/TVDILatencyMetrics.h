//
#ifndef TVDILatencyMetrics_h
#define TVDILatencyMetrics_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject;

@interface TVDILatencyMetrics : NSObject <NSCopying, NSCoding>

@property (readonly, nonatomic) int minimum;
@property (readonly, nonatomic) int maximum;
@property (readonly, nonatomic) int average;

/* instance methods */
- (id)initWithMinimum:(int)minimum maximum:(int)maximum average:(int)average;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TVDILatencyMetrics_h */
