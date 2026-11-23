//
#ifndef FIRTimestamp_h
#define FIRTimestamp_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface FIRTimestamp : NSObject <NSCopying>

@property (readonly, nonatomic) long long seconds;
@property (readonly, nonatomic) int nanoseconds;

/* class methods */
+ (id)timestampWithDate:(id)date;
+ (id)timestampWithSeconds:(long long)seconds nanoseconds:(int)nanoseconds;
+ (id)timestamp;

/* instance methods */
- (id)ISO8601String;
- (id)initWithSeconds:(long long)seconds nanoseconds:(int)nanoseconds;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)dateValue;
- (long long)compare:(id)compare;
- (_Bool)isEqualToTimestamp:(id)timestamp;

@end

#endif /* FIRTimestamp_h */
