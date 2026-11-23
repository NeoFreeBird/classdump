//
#ifndef TNLGlobalConfiguration_h
#define TNLGlobalConfiguration_h
@import Foundation;

#include "TNLBackoffBehaviorProvider-Protocol.h"
#include "TNLBackoffSignaler-Protocol.h"
#include "TNLCommunicationAgent.h"

@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TNLHostSanitizer, TNLLogger;

@interface TNLGlobalConfiguration : NSObject {
    /* instance variables */
    unsigned long long _nextBackgroundTaskIdentifier;
    NSMutableDictionary *_runningBackgroundTasks;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSArray *_authHandlers;
    unsigned long long _sharedUIApplicationBackgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    id <TNLLogger> _internalLogger;
    unsigned long long _internalURLSessionPruneOptions;
    double _internalURLSessionInactivityThreshold;
    long long _lastApplicationState;
}

@property (retain) id <TNLHostSanitizer> hostSanitizer;
@property (retain) TNLCommunicationAgent *metricProvidingCommunicationAgent;
@property (nonatomic) long long operationAutomaticDependencyPriorityThreshold;
@property long long backoffMode;
@property (retain) id <TNLBackoffBehaviorProvider> backoffBehaviorProvider;
@property (retain) id <TNLBackoffSignaler> backoffSignaler;
@property _Bool shouldBackoffUseOriginalRequestHost;
@property unsigned long long URLSessionPruneOptions;
@property double URLSessionInactivityThreshold;
@property (nonatomic) double requestOperationCallbackTimeout;
@property _Bool shouldForceCrashOnCloggedCallback;
@property (nonatomic) long long idleTimeoutMode;
@property (nonatomic) double timeoutIntervalBetweenDataTransfer;
@property (retain) id <TNLLogger> logger;
@property (nonatomic) _Bool assertsEnabled;

/* class methods */
+ (id)version;
+ (id)sharedInstance;

/* instance methods */
- (id)allRequestOperations;
- (id)init;
- (id)initInternal;
- (void)_tnl_applicationDidFinishLaunching:(id)launching;
- (void)_tnl_applicationWillResignActive:(id)active;
- (void)_tnl_applicationWillEnterForeground:(id)foreground;
- (void)_tnl_applicationDidBecomeActive:(id)active;
- (void)_tnl_applicationDidEnterBackground:(id)background;
- (void)_tnl_applicationDidReceiveMemoryWarning:(id)warning;
- (void)addNetworkObserver:(id)observer;
- (void)removeNetworkObserver:(id)observer;
- (id)allNetworkObservers;
- (void)addHeaderProvider:(id)provider;
- (void)removeHeaderProvider:(id)provider;
- (id)allHeaderProviders;
- (void)pruneURLSessionMatchingRequestConfiguration:(id)configuration operationQueueId:(id)id;
- (_Bool)areAssertsEnabled;
- (void)addAuthenticationChallengeHandler:(id)handler;
- (void)removeAuthenticationChallengeHandler:(id)handler;

@end

#endif /* TNLGlobalConfiguration_h */
