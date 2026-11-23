//
#ifndef TFNTwitterAccountService_Protocol_h
#define TFNTwitterAccountService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFNTwitterAccountService <NSObject>

@required

@property (nonatomic, readonly) NSArray *accounts;

/* required instance methods */
- (id)accountForAccountID:(id)id;
- (id)accountForAccountID:(id)id;
- (void)reloadFromStore;
- (void)saveAccounts;
- (void)addAccount:(id)account;
- (void)addAccount:(id)account;
- (void)removeAccount:(id)account;
- (void)removeAccount:(id)account;
- (void)removeAllAccounts;
- (id)addObserver:(id)observer;

@optional

@end

#endif /* TFNTwitterAccountService_Protocol_h */
