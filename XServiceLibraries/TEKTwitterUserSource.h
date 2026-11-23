//
#ifndef TEKTwitterUserSource_h
#define TEKTwitterUserSource_h
@import Foundation;

#include "TEKTwitterAccount.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface TEKTwitterUserSource : NSObject {
    /* instance variables */
    NSMutableDictionary *_userDictionary;
    NSMutableOrderedSet *_pendingRequests;
}

@property (retain, nonatomic) TEKTwitterAccount *authenticatingAccount;

/* instance methods */
- (id)init;
- (id)userForScreenName:(id)name;
- (_Bool)containsUserForScreenName:(id)name;
- (void)fetchUsersForScreenNames:(id)names completion:(id /* block */)completion;

@end

#endif /* TEKTwitterUserSource_h */
