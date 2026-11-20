//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMConfigStore_Protocol_h
#define APMConfigStore_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMConfigStore <NSObject>

@required

/* required instance methods */
- (id)objectForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)numberForKey:(id)key;
- (long long)integerForKey:(id)key;
- (float)floatForKey:(id)key;
- (double)doubleForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)setFloat:(float)_float forKey:(id)key;
- (void)setDouble:(double)_double forKey:(id)key;
- (void)setInteger:(long long)integer forKey:(id)key;
- (void)setBool:(_Bool)_bool forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)clearAllData;
- (void)synchronize;

@optional

@end

#endif /* APMConfigStore_Protocol_h */
