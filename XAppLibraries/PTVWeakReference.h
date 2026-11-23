//
#ifndef PTVWeakReference_h
#define PTVWeakReference_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject;

@interface PTVWeakReference : NSObject

@property (readonly, weak, nonatomic) id <NSObject> weakValue;
@property (readonly, nonatomic) id <NSObject> originalValue;

/* class methods */
+ (id)weakReferenceWithObject:(id)object;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithObject:(id)object;
- (_Bool)isEqualToWeakReference:(id)reference;

@end

#endif /* PTVWeakReference_h */
