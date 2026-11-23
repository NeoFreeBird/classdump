//
#ifndef TFSTwitterAPIGuestAuthRetry_h
#define TFSTwitterAPIGuestAuthRetry_h
@import Foundation;

#include "TFSAuthenticating-Protocol.h"
#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterAPIGuestAuthRetry : NSObject <TNLRequestRetryPolicyProvider> {
    /* instance variables */
    id <TFSAuthenticating> _authenticating;
    unsigned long long _retryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAuthenticating:(id)authenticating;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response;

@end

#endif /* TFSTwitterAPIGuestAuthRetry_h */
