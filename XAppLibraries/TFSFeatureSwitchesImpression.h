//
#ifndef TFSFeatureSwitchesImpression_h
#define TFSFeatureSwitchesImpression_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSFeatureSwitchesImpression : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *bucket;
@property (readonly, nonatomic) long long version;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)impressionWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithKey:(id)key bucket:(id)bucket version:(long long)version;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToImpression:(id)impression;
- (void)logImpressionWithEventLogger:(id)logger;

@end

#endif /* TFSFeatureSwitchesImpression_h */
