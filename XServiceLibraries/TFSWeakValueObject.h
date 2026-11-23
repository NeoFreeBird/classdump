//
#ifndef TFSWeakValueObject_h
#define TFSWeakValueObject_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSWeakValueObject : NSObject <NSCopying> {
    /* instance variables */
    unsigned long long _hashValue;
}

@property (weak, nonatomic) id value;

/* class methods */
+ (id)withValue:(id)value;

/* instance methods */
- (id)initWithValue:(id)value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSWeakValueObject_h */
