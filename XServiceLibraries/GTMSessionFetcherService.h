//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMSessionFetcherService_h
#define GTMSessionFetcherService_h
@import Foundation;

#include "GTMFetcherAuthorizationProtocol-Protocol.h"
#include "GTMSessionFetcherServiceProtocol-Protocol.h"
#include "GTMSessionFetcherSessionDelegateDispatcher.h"
#include "GTMUserAgentProvider-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSHTTPCookieStorage, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSPointerArray, NSString, NSURLCredential, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface GTMSessionFetcherService : NSObject <GTMSessionFetcherServiceProtocol> {
    /* instance variables */
    GTMSessionFetcherSessionDelegateDispatcher *_delegateDispatcher;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionCreationLock;
    _Bool _callbackQueueIsConcurrent;
    double _timeout;
    NSMutableArray *_stoppedFetchersToWaitFor;
    NSDate *_stoppedAllFetchersDate;
}

@property (retain) NSDictionary *delayedFetchersByHost;
@property (retain) NSDictionary *runningFetchersByHost;
@property (readonly) NSPointerArray *decoratorsPointerArray;
@property unsigned long long maxRunningFetchersPerHost;
@property (retain) NSURLSessionConfiguration *configuration;
@property (copy) id /* block */ configurationBlock;
@property (retain) NSHTTPCookieStorage *cookieStorage;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ challengeBlock;
@property (retain) NSURLCredential *credential;
@property (retain) NSURLCredential *proxyCredential;
@property (copy) NSArray *allowedInsecureSchemes;
@property _Bool allowLocalhostRequest;
@property _Bool allowInvalidServerCertificates;
@property _Bool retryEnabled;
@property (copy) id /* block */ retryBlock;
@property double maxRetryInterval;
@property double minRetryInterval;
@property (copy) NSDictionary *properties;
@property (copy) id /* block */ metricsCollectionBlock;
@property _Bool stopFetchingTriggersCompletionHandler;
@property _Bool skipBackgroundTask;
@property (retain) id <GTMUserAgentProvider> userAgentProvider;
@property (copy) NSString *userAgent;
@property (retain) id <GTMFetcherAuthorizationProtocol> authorizer;
@property (readonly) NSOperationQueue *delegateQueue;
@property (retain) NSOperationQueue *sessionDelegateQueue;
@property _Bool reuseSession;
@property double unusedSessionTimeout;
@property (readonly) NSArray *decorators;
@property (copy) id /* block */ testBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)mockFetcherServiceWithFakedData:(id)data fakedError:(id)error;
+ (id)mockFetcherServiceWithFakedData:(id)data fakedResponse:(id)response fakedError:(id)error;
+ (unsigned long long)numberOfNonBackgroundSessionFetchers:(id)fetchers;

/* instance methods */
- (_Bool)waitForCompletionOfAllFetchersWithTimeout:(double)timeout;
- (id)init;
- (void)dealloc;
- (id)serialQueueForNewFetcher:(id)fetcher;
- (id)fetcherWithRequest:(id)request fetcherClass:(Class)_class;
- (id)fetcherWithRequest:(id)request;
- (id)fetcherWithURL:(id)url;
- (id)fetcherWithURLString:(id)urlstring;
- (void)addDecorator:(id)decorator;
- (void)removeDecorator:(id)decorator;
- (id)session;
- (id)sessionWithCreationBlock:(id /* block */)block;
- (id)sessionDelegate;
- (void)addRunningFetcher:(id)fetcher forHost:(id)host;
- (void)addDelayedFetcher:(id)fetcher forHost:(id)host;
- (_Bool)isDelayingFetcher:(id)fetcher;
- (_Bool)fetcherShouldBeginFetching:(id)fetching;
- (void)startFetcher:(id)fetcher;
- (id)delegateDispatcherForFetcher:(id)fetcher;
- (void)fetcherDidBeginFetching:(id)fetching;
- (void)stopFetcher:(id)fetcher;
- (void)fetcherDidStop:(id)stop;
- (void)fetcherDidStop:(id)stop callbacksPending:(_Bool)pending;
- (unsigned long long)numberOfFetchers;
- (unsigned long long)numberOfRunningFetchers;
- (unsigned long long)numberOfDelayedFetchers;
- (id)issuedFetchers;
- (id)issuedFetchersWithRequestURL:(id)url;
- (void)stopAllFetchers;
- (id)stoppedAllFetchersDate;
- (void)resetSession;
- (void)resetSessionInternal;
- (void)resetSessionForDispatcherDiscardTimer:(id)timer;
- (void)abandonDispatcher;
- (void)detachAuthorizer;
- (void)setConcurrentCallbackQueue:(id)queue;
- (void)setCallbackQueue:(id)queue isConcurrent:(_Bool)concurrent;
- (_Bool)isRetryEnabled;

@end

#endif /* GTMSessionFetcherService_h */
