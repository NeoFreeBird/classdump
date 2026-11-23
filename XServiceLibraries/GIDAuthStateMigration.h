//
#ifndef GIDAuthStateMigration_h
#define GIDAuthStateMigration_h
@import Foundation;

#include "GTMKeychainStore.h"

@class NSObject;

@interface GIDAuthStateMigration : NSObject

@property (retain, nonatomic) GTMKeychainStore *keychainStore;

/* class methods */
+ (id)passwordForService:(id)service;

/* instance methods */
- (id)initWithKeychainStore:(id)store;
- (id)init;
- (void)migrateIfNeededWithTokenURL:(id)url callbackPath:(id)path keychainName:(id)name isFreshInstall:(_Bool)install;
- (id)extractAuthSessionWithTokenURL:(id)url callbackPath:(id)path;

@end

#endif /* GIDAuthStateMigration_h */
