//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthGuestAuthManager_h
#define TFSAuthGuestAuthManager_h
@import Foundation;

#include "TFSAuthConsumerCredential.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, TFSAuthCredentialStateTransitionDelegate, TFSAuthGuestAuthAPI, TFSAuthKeychainSupport;

@interface TFSAuthGuestAuthManager : NSObject {
    /* instance variables */
    NSMutableArray *_pendingCompletionBlocks;
    NSMutableArray *_pendingHandleResponseCompletionBlocks;
    NSString *_appToken;
    _Bool _needRefreshGuestToken;
    unsigned long long _lastGuestTokenRefreshSuccessTime;
    unsigned long long _guestAuthRetryCount;
    _Bool _isAttemptingTokenAcquisition;
}

@property (nonatomic) long long authState;
@property (copy) NSString *guestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long maxGuestAuthRetryAttempts;
@property (retain, nonatomic) TFSAuthConsumerCredential *oAuthConsumerCredential;
@property (weak, nonatomic) id <TFSAuthGuestAuthAPI> guestAuthAPI;
@property (retain, nonatomic) id <TFSAuthKeychainSupport> keychainSupport;
@property (weak, nonatomic) id <TFSAuthCredentialStateTransitionDelegate> credentialStateTransitionDelegate;

/* class methods */
+ (_Bool)_isInvalidAppTokenFromHTTPStatus:(long long)httpstatus apiErrorCode:(long long)code;
+ (long long)_authErrorCodeForAPIResponse:(id)apiresponse;

/* instance methods */
- (id)init;
- (void)retrieveGuestAuthTokensWithCompletionBlock:(id /* block */)block;
- (id)additionalAuthenticationHTTPHeaders;
- (void)signRequest:(id)request completion:(id /* block */)completion;
- (id)handleGuestAuthRequestResponse:(id)response;
- (_Bool)responseHasRetriableAuthError:(id)error;
- (_Bool)_needsRefresh;
- (void)_acquireTokensWithAppToken:(id)token;
- (void)_acquireTokensUseKeychain:(_Bool)keychain;
- (void)_handleTokenAcquisitionServerCallFailure:(id)failure;
- (void)_acquireGuestToken;
- (void)_tokenAcquisitionDidCompleteWithSuccess:(_Bool)success error:(id)error;
- (id)_oAuthConsumerKey;
- (id)_oAuthConsumerSecret;

@end

#endif /* TFSAuthGuestAuthManager_h */
