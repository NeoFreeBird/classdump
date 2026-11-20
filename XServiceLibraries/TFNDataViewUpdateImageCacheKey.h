//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewUpdateImageCacheKey_h
#define TFNDataViewUpdateImageCacheKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFNDataViewUpdateImageCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, copy, nonatomic) NSString *transformerIdentifier;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;

/* class methods */
+ (id)keyWithView:(id)view fetchRequest:(id)request;

/* instance methods */
- (id)initWithImageIdentifier:(id)identifier transformerIdentifier:(id)identifier viewSize:(struct CGSize { double x0; double x1; })size;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNDataViewUpdateImageCacheKey_h */
