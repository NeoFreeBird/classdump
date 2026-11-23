//
#ifndef APMKeychainWrapper_h
#define APMKeychainWrapper_h
@import Foundation;

@class NSObject;

@interface APMKeychainWrapper : NSObject

/* class methods */
+ (_Bool)upsertKeychainValue:(id)value withIdentifier:(id)identifier appID:(id)id;
+ (id)keychainValueWithIdentifier:(id)identifier appID:(id)id;
+ (void)deleteKeychainValueWithIdentifier:(id)identifier appID:(id)id;
+ (void)migrateKeychainDataToStringWithIdentifier:(id)identifier withAppID:(id)id;
+ (id)searchDirectoryForIdentifier:(id)identifier withAppID:(id)id;
+ (id)keychainDataWithIdentifier:(id)identifier appID:(id)id;
+ (_Bool)isMigrationNeededForIdentifier:(id)identifier withAppID:(id)id;

@end

#endif /* APMKeychainWrapper_h */
