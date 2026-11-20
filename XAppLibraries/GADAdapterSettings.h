//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdapterSettings_h
#define GADAdapterSettings_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADAdapterSettings : NSObject {
    /* instance variables */
    struct sqlite3 * _database;
    NSMutableDictionary *_values;
    NSMutableDictionary *_valuesToWrite;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addEntriesFromDictionary:(id)dictionary;
- (id)stringForKey:(id)key withDefault:(id)_default;
- (long long)longLongForKey:(id)key withDefault:(long long)_default;
- (long long)integerForKey:(id)key withDefault:(long long)_default;
- (double)doubleForKey:(id)key withDefault:(double)_default;
- (_Bool)boolForKey:(id)key withDefault:(_Bool)_default;
- (id)arrayForKey:(id)key withDefault:(id)_default;
- (id)dictionaryForKey:(id)key withDefault:(id)_default;
- (_Bool)openDatabase;
- (void)clearDatabaseValues;
- (void)loadDatabaseValues;
- (id)internalStringForKey:(id)key;
- (void)updateValuesWithString:(id)string forKey:(id)key;
- (void)writeUpdates;
- (void)writeUpdatedValues:(id)values;

@end

#endif /* GADAdapterSettings_h */
