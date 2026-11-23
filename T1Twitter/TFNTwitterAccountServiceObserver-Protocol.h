//
#ifndef TFNTwitterAccountServiceObserver_Protocol_h
#define TFNTwitterAccountServiceObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterAccountServiceObserver <NSObject>

@required

/* required instance methods */
- (void)accountService:(id)service addedAccount:(id)account;
- (void)accountService:(id)service willRemoveAccount:(id)account;
- (void)accountService:(id)service willRemoveAccount:(id)account;
- (void)accountService:(id)service removedAccountWithAccountID:(id)id;

@optional

@end

#endif /* TFNTwitterAccountServiceObserver_Protocol_h */
