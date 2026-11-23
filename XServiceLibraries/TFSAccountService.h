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
