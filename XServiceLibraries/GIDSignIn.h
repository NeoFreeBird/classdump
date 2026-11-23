//
#ifndef GIDSignIn_h
#define GIDSignIn_h
@import Foundation;

#include "GIDAppCheck.h"
#include "GIDConfiguration.h"
#include "GIDGoogleUser.h"
#include "GIDSignInInternalOptions.h"
#include "GIDTimedLoader.h"
#include "GTMKeychainStore.h"
#include "OIDExternalUserAgentSession-Protocol.h"
#include "OIDServiceConfiguration.h"

@class NSObject;

@interface GIDSignIn : NSObject {
    /* instance variables */
    GIDSignInInternalOptions *_currentOptions;
    GIDAppCheck *_appCheck;
    OIDServiceConfiguration *_appAuthConfiguration;
    id <OIDExternalUserAgentSession> _currentAuthorizationFlow;
    _Bool _restarting;
    GTMKeychainStore *_keychainStore;
    GIDTimedLoader *_timedLoader;
    _Bool _configureAppCheckCalled;
}

@property (retain, nonatomic) GIDGoogleUser *currentUser;
@property (retain, nonatomic) GIDConfiguration *configuration;

/* class methods */
+ (id)sharedInstance;
+ (_Bool)isOperatingSystemAtLeast9;
+ (id)configValueFromBundle:(id)bundle forKey:(id)key;
+ (id)configurationFromBundle:(id)bundle;

/* instance methods */
- (_Bool)handleURL:(id)url;
- (_Bool)hasPreviousSignIn;
- (void)restorePreviousSignInWithCompletion:(id /* block */)completion;
- (_Bool)restorePreviousSignInNoRefresh;
- (void)signInWithPresentingViewController:(id)controller hint:(id)hint completion:(id /* block */)completion;
- (void)signInWithPresentingViewController:(id)controller hint:(id)hint additionalScopes:(id)scopes completion:(id /* block */)completion;
- (void)signInWithPresentingViewController:(id)controller completion:(id /* block */)completion;
- (void)addScopes:(id)scopes presentingViewController:(id)controller completion:(id /* block */)completion;
- (void)signOut;
- (void)disconnectWithCompletion:(id /* block */)completion;
- (void)configureWithCompletion:(id /* block */)completion;
- (void)configureDebugProviderWithAPIKey:(id)apikey completion:(id /* block */)completion;
- (id)initWithKeychainStore:(id)store;
- (id)initWithKeychainStore:(id)store appCheck:(id)check;
- (void)signInWithOptions:(id)options;
- (void)authenticateInteractivelyWithOptions:(id)options;
- (void)authorizationRequestWithOptions:(id)options completion:(id /* block */)completion;
- (id)authorizationRequestWithOptions:(id)options additionalParameters:(id)parameters;
- (id)additionalParametersFromOptions:(id)options;
- (id)redirectURLWithOptions:(id)options;
- (void)processAuthorizationResponse:(id)response error:(id)error emmSupport:(id)support;
- (void)authenticateWithOptions:(id)options;
- (void)maybeFetchToken:(id)token;
- (void)addSaveAuthCallback:(id)callback;
- (void)addDecodeIdTokenCallback:(id)callback;
- (void)addCompletionCallback:(id)callback;
- (void)startFetchURL:(id)url fromAuthState:(id)state withComment:(id)comment withCompletionHandler:(id /* block */)handler;
- (_Bool)handleDevicePolicyAppURL:(id)url;
- (id)errorWithString:(id)string code:(long long)code;
- (void)assertValidParameters;
- (void)assertValidPresentingViewController;
- (_Bool)isFreshInstall;
- (void)removeAllKeychainEntries;
- (_Bool)saveAuthState:(id)state;
- (id)loadAuthState;
- (id)profileDataWithIDToken:(id)idtoken;

@end

#endif /* GIDSignIn_h */
