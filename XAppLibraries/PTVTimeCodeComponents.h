//
#ifndef PTVTimeCodeComponents_h
#define PTVTimeCodeComponents_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface PTVTimeCodeComponents : NSObject <NSCopying>

@property (readonly, nonatomic) long long hours;
@property (readonly, nonatomic) long long minutes;
@property (readonly, nonatomic) long long seconds;
@property (readonly, nonatomic) long long durationInSeconds;
@property (readonly, nonatomic) double timeInterval;

/* class methods */
+ (id)TimeCodeComponentsFromTimeInterval:(double)interval;
+ (id)TimeCodeComponentsExpression;
+ (id)TimeCodeComponentsFromString:(id)string;
+ (id)TimeCodeStringFromTimeInterval:(double)interval;
+ (double)TimeCodeFromString:(id)string;
+ (id)TimeCodeComponentsFromQueryItemNamed:(id)named InURL:(id)url;
+ (double)TimeCodeFromURL:(id)url;
+ (double)TimeCodeFromQueryItemNamed:(id)named InURL:(id)url;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToTimeComponents:(id)components;
- (unsigned long long)hash;
- (id)description;
- (id)initWithHours:(long long)hours minutes:(long long)minutes seconds:(long long)seconds;
- (id)stringValue;

@end

#endif /* PTVTimeCodeComponents_h */
