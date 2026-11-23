//
#ifndef APMValue_h
#define APMValue_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface APMValue : NSObject <NSCopying> {
    /* instance variables */
    id _value;
}

@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) _Bool isDouble;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) _Bool isInt64;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, nonatomic) _Bool isString;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) _Bool isArray;
@property (readonly, nonatomic) NSArray *arrayValue;

/* class methods */
+ (id)valueFromObject:(id)object;
+ (id)valueFromObject:(id)object allowArray:(_Bool)array;

/* instance methods */
- (id)initWithDouble:(double)_double;
- (id)initWithInt64:(long long)int64;
- (id)initWithString:(id)string;
- (id)initWithArray:(id)array;
- (id)initWithValueType:(long long)type value:(id)value;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* APMValue_h */
