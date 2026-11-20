//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountService_h
#define TFSAccountService_h
@import Foundation;

#include "TFSTwitterAccount.h"

@class NSArray, NSObject;

@interface TFSAccountService : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 accountService;
}

@property (readonly, nonatomic) TFSTwitterAccount *activeAccount;
@property (nonatomic, readonly) NSArray *accounts;

/* instance methods */
- (id)initWithAttributeStore:(id)store credentialsStore:(id)store accountCoding:(id)coding;
- (id)accountFor:(id)_for;
- (void)addAccount:(id)account;
- (void)removeAccountWithIdentifier:(id)identifier;
- (void)makeFirstWithIdentifier:(id)identifier;
- (id)init;

@end

#endif /* TFSAccountService_h */
