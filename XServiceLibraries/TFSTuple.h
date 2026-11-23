//
#ifndef TFSTuple_h
#define TFSTuple_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSTuple : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

/* class methods */
+ (id)transpose:(id)transpose;

/* instance methods */
- (id)initWithFirst:(id)first second:(id)second;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTuple_h */
