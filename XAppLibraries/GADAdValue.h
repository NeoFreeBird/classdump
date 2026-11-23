//
#ifndef GADAdValue_h
#define GADAdValue_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDecimalNumber, NSObject, NSString;

@interface GADAdValue : NSObject <NSCopying>

@property (readonly, nonatomic) long long precision;
@property (readonly, nonatomic) NSDecimalNumber *value;
@property (readonly, nonatomic) NSString *currencyCode;

/* instance methods */
- (id)initWithValue:(id)value currencyCode:(id)code precision:(long long)precision;
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* GADAdValue_h */
