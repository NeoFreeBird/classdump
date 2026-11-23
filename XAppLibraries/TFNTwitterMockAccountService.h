//
#ifndef TFNTwitterMockAccountService_h
#define TFNTwitterMockAccountService_h
@import Foundation;

#include "TFNTwitterAccountService-Protocol.h"
#include "TFNTwitterAccountStore.h"

@class NSArray, NSHashTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFNTwitterMockAccountService : NSObject <TFNTwitterAccountService> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observerTokens;
    TFNTwitterAccountStore *_accountStore;
}

@property (readonly) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccounts:(id)accounts accountStore:(id)store;
- (id)accountForAccountID:(id)id;
- (void)addAccount:(id)account;
- (void)removeAccount:(id)account;
- (void)removeAllAccounts;
- (void)saveAccounts;
- (void)reloadFromStore;
- (id)addObserver:(id)observer;

@end

#endif /* TFNTwitterMockAccountService_h */
