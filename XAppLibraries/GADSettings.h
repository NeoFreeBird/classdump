//
#ifndef GADSettings_h
#define GADSettings_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADSettings : NSObject {
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
- (void)resetToDefaults;
- (void)loadDatabaseValues;
- (_Bool)openDatabase;
- (void)updateValuesWithString:(id)string forKey:(id)key;
- (void)addEntriesFromDictionary:(id)dictionary;
- (id)internalObjectForKey:(id)key;
- (id)objectForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)stringsForKeys:(id)keys;
- (long long)longLongForKey:(id)key;
- (long long)integerForKey:(id)key;
- (double)doubleForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (void)writeUpdates;
- (void)writeUpdatedValues:(id)values;

@end

#endif /* GADSettings_h */
