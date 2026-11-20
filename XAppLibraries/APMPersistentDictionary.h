//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPersistentDictionary_h
#define APMPersistentDictionary_h
@import Foundation;

#include "APMConfigStore-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface APMPersistentDictionary : NSObject <APMConfigStore> {
    /* instance variables */
    NSURL *_fileURL;
    NSMutableDictionary *_content;
    _Bool _hasPendingPersistence;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFileName:(id)name;
- (void)dealloc;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (long long)integerForKey:(id)key;
- (float)floatForKey:(id)key;
- (double)doubleForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (void)setInteger:(long long)integer forKey:(id)key;
- (void)setFloat:(float)_float forKey:(id)key;
- (void)setDouble:(double)_double forKey:(id)key;
- (void)setBool:(_Bool)_bool forKey:(id)key;
- (void)clearAllData;
- (void)schedulePersistToDisk;
- (void)persistToDisk;
- (void)synchronize;

@end

#endif /* APMPersistentDictionary_h */
