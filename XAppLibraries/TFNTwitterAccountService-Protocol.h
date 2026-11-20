//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountService_Protocol_h
#define TFNTwitterAccountService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFNTwitterAccountService <NSObject>

@required

@property (readonly) NSArray *accounts;

/* required instance methods */
- (id)accountForAccountID:(id)id;
- (void)reloadFromStore;
- (void)saveAccounts;
- (void)addAccount:(id)account;
- (void)removeAccount:(id)account;
- (void)removeAllAccounts;
- (void)reorderAccounts:(id)accounts;
- (id)addObserver:(id)observer;

@optional

@end

#endif /* TFNTwitterAccountService_Protocol_h */
