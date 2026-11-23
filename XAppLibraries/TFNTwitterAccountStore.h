//
#ifndef TFNTwitterAccountStore_h
#define TFNTwitterAccountStore_h
@import Foundation;

#include "TFNTwitterAccountStoreDelegate-Protocol.h"

@class NSObject;

@interface TFNTwitterAccountStore : NSObject

@property (weak, nonatomic) id <TFNTwitterAccountStoreDelegate> delegate;

/* class methods */
+ (_Bool)isTwitterNeverPersistedOrNotAccessibleInStandardUserDefaults;

/* instance methods */
- (id)loadAccounts;
- (id)_savedTwitterDictionary;
- (void)saveAccounts:(id)accounts;
- (id)_userDefaultsDictionaryValueForAccounts:(id)accounts groupUserDefaults:(_Bool)defaults;
- (id)_keychainDictionaryValueForAccounts:(id)accounts;

@end

#endif /* TFNTwitterAccountStore_h */
