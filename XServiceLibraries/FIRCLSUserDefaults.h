//
#ifndef FIRCLSUserDefaults_h
#define FIRCLSUserDefaults_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface FIRCLSUserDefaults : NSObject

@property (nonatomic) _Bool synchronizeWroteToDisk;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSDictionary *persistedDataDictionary;
@property (readonly, copy, nonatomic) NSMutableDictionary *dataDictionary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDictionaryQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;

/* class methods */
+ (id)standardUserDefaults;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (id)generateDirectoryURL;
- (id)generateDirectoryURLForBaseURL:(id)url hostAppBundleIdentifier:(id)identifier;
- (id)getEscapedAppBundleIdentifier;
- (id)objectForKey:(id)key;
- (id)stringForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (long long)integerForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)setString:(id)string forKey:(id)key;
- (void)setBool:(_Bool)_bool forKey:(id)key;
- (void)setInteger:(long long)integer forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (id)dictionaryRepresentation;
- (void)synchronize;
- (id)loadDefaults;
- (void)migrateFromNSUserDefaults:(id)defaults;
- (id)objectForKeyByMigratingFromNSUserDefaults:(id)defaults;

@end

#endif /* FIRCLSUserDefaults_h */
