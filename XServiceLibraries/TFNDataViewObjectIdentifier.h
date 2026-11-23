//
#ifndef TFNDataViewObjectIdentifier_h
#define TFNDataViewObjectIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNDataViewObjectIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id item;

/* instance methods */
- (id)initWithItem:(id)item;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNDataViewObjectIdentifier_h */
