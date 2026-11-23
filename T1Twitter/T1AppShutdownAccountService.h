//
#ifndef T1AppShutdownAccountService_h
#define T1AppShutdownAccountService_h
@import Foundation;

#include "TFNTwitterAccountService-Protocol.h"

@class NSArray, NSObject, NSString;

@interface T1AppShutdownAccountService : NSObject <TFNTwitterAccountService>

@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)accountForAccountID:(id)id;
- (void)addAccount:(id)account;
- (void)reloadFromStore;
- (void)removeAccount:(id)account;
- (void)removeAllAccounts;
- (void)saveAccounts;
- (id)addObserver:(id)observer;

@end

#endif /* T1AppShutdownAccountService_h */
