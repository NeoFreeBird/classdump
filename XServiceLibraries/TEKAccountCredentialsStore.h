//
#ifndef TEKAccountCredentialsStore_h
#define TEKAccountCredentialsStore_h
@import Foundation;

#include "TFSAccountCredentialsSecretStore-Protocol.h"
#include "TFSKeychain.h"

@class NSObject, NSString;

@interface TEKAccountCredentialsStore : NSObject <TFSAccountCredentialsSecretStore>

@property (readonly, nonatomic) TFSKeychain *keychain;
@property (readonly, copy, nonatomic) NSString *keychainServiceName;
@property (readonly, copy, nonatomic) NSString *accessGroup;

/* instance methods */
- (id)initWithKeychain:(id)keychain keychainServiceName:(id)name accessGroup:(id)group;
- (_Bool)loadSecretWithToken:(id)token error:(id *)error secret:(id /* block */)secret;
- (_Bool)saveSecretWithToken:(id)token secret:(id)secret error:(id *)error;
- (_Bool)removeSecretWithToken:(id)token error:(id *)error;

@end

#endif /* TEKAccountCredentialsStore_h */
