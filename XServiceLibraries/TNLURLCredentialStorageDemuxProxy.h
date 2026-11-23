//
#ifndef TNLURLCredentialStorageDemuxProxy_h
#define TNLURLCredentialStorageDemuxProxy_h
@import Foundation;

#include "TNLSharedCredentialStorageProxy.h"

@interface TNLURLCredentialStorageDemuxProxy : TNLSharedCredentialStorageProxy

/* instance methods */
- (void)getCredentialsForProtectionSpace:(id)space task:(id)task completionHandler:(id /* block */)handler;
- (void)setCredential:(id)credential forProtectionSpace:(id)space task:(id)task;
- (void)removeCredential:(id)credential forProtectionSpace:(id)space options:(id)options task:(id)task;
- (void)getDefaultCredentialForProtectionSpace:(id)space task:(id)task completionHandler:(id /* block */)handler;
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)space task:(id)task;

@end

#endif /* TNLURLCredentialStorageDemuxProxy_h */
