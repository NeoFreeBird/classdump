//
#ifndef TAVScribeThriftVideoVariantDetails_h
#define TAVScribeThriftVideoVariantDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TAVScribeThriftVideoVariantDetails : NSObject <NSCopying>

@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;

/* instance methods */
- (id)initWithWidth:(int)width height:(int)height;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftVideoVariantDetails_h */
