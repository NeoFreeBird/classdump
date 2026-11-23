//
#ifndef GADSDKCoreContext_h
#define GADSDKCoreContext_h
@import Foundation;

#include "GADJSContext.h"
#include "GADLocalStorageMonitor.h"
#include "GADPersistentStateMonitor.h"

@class NSMutableArray, NSObject;

@interface GADSDKCoreContext : NSObject {
    /* instance variables */
    GADJSContext *_context;
    NSMutableArray *_monitors;
    GADPersistentStateMonitor *_persistentStateMonitor;
    GADLocalStorageMonitor *_localStorageMonitor;
}

@property (readonly, nonatomic) id messageSource;

/* class methods */
+ (void)loadWithSSLVerification:(id)sslverification completionHandler:(id /* block */)handler;
+ (void)loadWithEventContext:(id)context completionHandler:(id /* block */)handler;

/* instance methods */
- (void)setJSContext:(id)jscontext;
- (void)normalizeAdBody:(id)body headers:(id)headers statusCode:(long long)code serverRequest:(id)request completionHandler:(id /* block */)handler;
- (void)adDictionaryFromSignals:(id)signals completionHandler:(id /* block */)handler;
- (void)encryptSignalDictionary:(id)dictionary completionHandler:(id /* block */)handler;
- (void)notifyBlockedOpenActionWithParameters:(id)parameters;
- (void)runGcacheWithArguments:(id)arguments completionHandler:(id /* block */)handler;
- (void)fetchRemoteConfigurationWithSignals:(id)signals completionHandler:(id /* block */)handler;
- (void)postEventLogs:(id)logs;
- (void)activate;
- (void)reloadSavedState;
- (void)requestSDKCoreConstantsUpdate;
- (void)updateSDKCoreConstants:(id)constants updateExperimentIDs:(_Bool)ids;

@end

#endif /* GADSDKCoreContext_h */
