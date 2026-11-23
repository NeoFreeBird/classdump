//
#ifndef FIRInstallationsStore_h
#define FIRInstallationsStore_h
@import Foundation;

#include "GULKeychainStorage.h"
#include "GULUserDefaults.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FIRInstallationsStore : NSObject

@property (readonly, nonatomic) GULKeychainStorage *secureStorage;
@property (readonly, nonatomic) NSString *accessGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) GULUserDefaults *userDefaults;

/* instance methods */
- (id)initWithSecureStorage:(id)storage accessGroup:(id)group;
- (id)installationForAppID:(id)id appName:(id)name;
- (id)saveInstallation:(id)installation;
- (id)removeInstallationForAppID:(id)id appName:(id)name;
- (id)installationExistsForAppID:(id)id appName:(id)name;
- (id)setInstallationExists:(_Bool)exists forItemWithIdentifier:(id)identifier;

@end

#endif /* FIRInstallationsStore_h */
