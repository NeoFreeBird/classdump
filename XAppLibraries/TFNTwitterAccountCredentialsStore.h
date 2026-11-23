//
#ifndef TFNTwitterAccountCredentialsStore_h
#define TFNTwitterAccountCredentialsStore_h
@import Foundation;

#include "TFSAccountCredentialsSecretStore-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, TFNTwitterAccountCredentialsStoreReportingContext;

@interface TFNTwitterAccountCredentialsStore : NSObject <TFSAccountCredentialsSecretStore> {
    /* instance variables */
    id <TFNTwitterAccountCredentialsStoreReportingContext> _context;
    NSObject<OS_dispatch_queue> *_keychainQueue;
}

/* instance methods */
- (id)initWithContext:(id)context;
- (_Bool)loadSecretWithToken:(id)token error:(id *)error secret:(id /* block */)secret;
- (void)_postSaveCredentialToKeychainErrorNotification:(id)notification;
- (_Bool)saveSecretWithToken:(id)token secret:(id)secret error:(id *)error;
- (id)_tfn_keychainQueue;
- (_Bool)removeSecretWithToken:(id)token error:(id *)error;
- (id)_keychainErrorScribeParameters:(id)parameters;

@end

#endif /* TFNTwitterAccountCredentialsStore_h */
