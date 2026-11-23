//
#ifndef TEKTwitterAccountSource_h
#define TEKTwitterAccountSource_h
@import Foundation;

#include "TEKTwitterAccount.h"
#include "TEKTwitterUserSource.h"
#include "TFSAccountAttributeStore-Protocol.h"
#include "TFSAccountService.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@interface TEKTwitterAccountSource : NSObject <TFSAccountAttributeStore>

@property (readonly, nonatomic) NSMutableArray *mutableAccounts;
@property (copy, nonatomic) NSString *applicationGroupName;
@property (retain, nonatomic) TEKTwitterUserSource *userSource;
@property (readonly, nonatomic) TFSAccountService *accountService;
@property (readonly, weak, nonatomic) TEKTwitterAccount *_tfs_parentAppSelectedAccount;
@property (readonly, copy, nonatomic) NSArray *accounts;

/* instance methods */
- (id)loadAndReturnError:(id *)error;
- (_Bool)save:(id)save error:(id *)error;
- (id)initWithApplicationGroupName:(id)name userSource:(id)source;
- (id)parentAppSelectedAccount;
- (id)_tek_parentAppSelectedAccount;
- (id)_applicationSavedTwitterState;
- (id)_sharedUserDefaults;

@end

#endif /* TEKTwitterAccountSource_h */
