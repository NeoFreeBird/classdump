//
#ifndef TDTSamplerValueSummary_h
#define TDTSamplerValueSummary_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TDTSamplerValueSummary : NSObject <NSSecureCoding>

@property (nonatomic) _Bool primed;
@property (nonatomic) double firstValue;
@property (nonatomic) double lastValue;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double total;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double delta;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)processValue:(double)value;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TDTSamplerValueSummary_h */
