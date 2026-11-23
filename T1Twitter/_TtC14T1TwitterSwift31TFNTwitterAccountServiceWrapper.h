//
#ifndef _TtC14T1TwitterSwift31TFNTwitterAccountServiceWrapper_h
#define _TtC14T1TwitterSwift31TFNTwitterAccountServiceWrapper_h
@import Foundation;

#include "TFNTwitterAccountService-Protocol.h"

@class NSArray, NSObject, _$s10TFSAccount14AccountServiceCMn _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.TFNTwitterAccountServiceWrapper : NSObject <TFNTwitterAccountService> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSAccount.AccountService __C.TFNTwitterAccount wrappedAccountService;
}

@property (nonatomic, readonly) NSArray *accounts;

/* instance methods */
- (id)accountForAccountID:(id)id;
- (void)reloadFromStore;
- (void)saveAccounts;
- (void)addAccount:(id)account;
- (void)removeAccount:(id)account;
- (void)removeAllAccounts;
- (id)addObserver:(id)observer;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31TFNTwitterAccountServiceWrapper_h */
