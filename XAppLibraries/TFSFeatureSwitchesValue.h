//
#ifndef TFSFeatureSwitchesValue_h
#define TFSFeatureSwitchesValue_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject, NSSet;

@interface TFSFeatureSwitchesValue : NSObject <NSSecureCoding> {
    /* instance variables */
    id _value;
    id _computedValue;
}

@property (readonly, nonatomic) NSSet *impressions;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)valueWithDictionary:(id)dictionary forImpressions:(id)impressions;

/* instance methods */
- (id)initWithValue:(id)value impressions:(id)impressions;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)boolValue;
- (double)doubleValue;
- (double)CGFloatValue;
- (long long)integerValue;
- (id)numberValue;
- (id)stringValue;
- (id)arrayValue;
- (id)setValue;
- (id)dictionaryValue;
- (id)rawValue;
- (_Bool)isEqualToValue:(id)value;

@end

#endif /* TFSFeatureSwitchesValue_h */
