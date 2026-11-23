//
#ifndef GADOMIDObjectKey_h
#define GADOMIDObjectKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface GADOMIDObjectKey : NSObject <NSCopying>

@property (readonly) id object;

/* class methods */
+ (id)objectKeyWithObject:(id)object;

/* instance methods */
- (id)initWithObject:(id)object;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* GADOMIDObjectKey_h */
