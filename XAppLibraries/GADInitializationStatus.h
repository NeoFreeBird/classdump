//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADInitializationStatus_h
#define GADInitializationStatus_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSObject;

@interface GADInitializationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *adapterStatusesByClassName;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithClassNames:(id)names;
- (id)statusWithEntry:(id)entry forKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* GADInitializationStatus_h */
