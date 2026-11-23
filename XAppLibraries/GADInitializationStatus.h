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
