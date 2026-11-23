//
#ifndef GTMSessionFetcher_h
#define GTMSessionFetcher_h
@import Foundation;

#include "GTMFetcherAuthorizationProtocol-Protocol.h"
#include "GTMSessionFetcherService.h"
#include "GTMSessionUploadFetcher.h"
#include "GTMUserAgentProvider-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSHTTPCookieStorage, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSObject, NSOperationQueue, NSString, NSTimer, NSURL, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GTMSessionFetcher : NSObject <NSURLSessionDelegate> {
    /* instance variables */
    _Bool _shouldInvalidateSession;
    NSURLSession *_sessionNeedingInvalidation;
    _Bool _didCreateSessionIdentifier;
    NSString *_sessionIdentifierUUID;
    _Bool _userRequestedBackgroundSession;
    NSError *_downloadFinishedError;
    NSData *_downloadTaskErrorData;
    _Bool _isStopNotificationNeeded;
    _Bool _isUsingTestBlock;
    NSObject<OS_dispatch_group> *_callbackGroup;
    NSOperationQueue *_delegateQueue;
    _Bool _hasStoppedFetching;
    _Bool _userStoppedFetching;
    _Bool _isRetryEnabled;
    NSTimer *_retryTimer;
    double _lastRetryInterval;
    NSDate *_initialRequestDate;
    _Bool _hasAttemptedAuthRefresh;
}

@property (readonly) GTMSessionUploadFetcher *parentUploadFetcher;
@property (retain) NSData *downloadedData;
@property (retain) NSData *downloadResumeData;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property _Bool usingBackgroundSession;
@property (retain) NSURLRequest *request;
@property (retain) NSURLSessionConfiguration *configuration;
@property (copy) id /* block */ configurationBlock;
@property (retain) NSURLSession *session;
@property (readonly) NSURLSessionTask *sessionTask;
@property (readonly) NSString *sessionIdentifier;
@property (readonly) _Bool wasCreatedFromBackgroundSession;
@property _Bool clientWillReconnectBackgroundSession;
@property (retain) NSDictionary *sessionUserInfo;
@property (copy) NSString *taskDescription;
@property float taskPriority;
@property (retain) id <GTMUserAgentProvider> userAgentProvider;
@property _Bool useBackgroundSession;
@property _Bool useUploadTask;
@property (readonly) _Bool canShareSession;
@property (copy) NSArray *allowedInsecureSchemes;
@property _Bool allowLocalhostRequest;
@property _Bool allowInvalidServerCertificates;
@property (retain) NSHTTPCookieStorage *cookieStorage;
@property (retain) NSURLCredential *credential;
@property (retain) NSURLCredential *proxyCredential;
@property (retain) NSData *bodyData;
@property (retain) NSURL *bodyFileURL;
@property (readonly) long long bodyLength;
@property (copy) id /* block */ bodyStreamProvider;
@property (retain) id <GTMFetcherAuthorizationProtocol> authorizer;
@property (retain) GTMSessionFetcherService *service;
@property (copy) NSString *serviceHost;
@property long long servicePriority;
@property (copy) id /* block */ didReceiveResponseBlock;
@property (copy) id /* block */ challengeBlock;
@property (copy) id /* block */ willRedirectBlock;
@property (copy) id /* block */ sendProgressBlock;
@property (copy) id /* block */ accumulateDataBlock;
@property (copy) id /* block */ receivedProgressBlock;
@property (copy) id /* block */ downloadProgressBlock;
@property (copy) id /* block */ willCacheURLResponseBlock;
@property _Bool retryEnabled;
@property (copy) id /* block */ retryBlock;
@property (copy) id /* block */ metricsCollectionBlock;
@property double maxRetryInterval;
@property double minRetryInterval;
@property double retryFactor;
@property (readonly) unsigned long long retryCount;
@property (readonly) double nextRetryInterval;
@property _Bool skipBackgroundTask;
@property (readonly) _Bool fetching;
@property _Bool stopFetchingTriggersCompletionHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ resumeDataBlock;
@property (readonly) long long statusCode;
@property (readonly) NSDictionary *responseHeaders;
@property (readonly) NSURLResponse *response;
@property (readonly) long long downloadedLength;
@property (retain) NSURL *destinationFileURL;
@property (readonly) NSDate *initialBeginFetchDate;
@property (retain) id userData;
@property (copy) NSDictionary *properties;
@property (copy) NSString *comment;
@property (copy) NSString *log;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSOperationQueue *sessionDelegateQueue;
@property (copy) id /* block */ testBlock;
@property unsigned long long testBlockAccumulateDataChunkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)load;
+ (void)reconnectFetchersForBackgroundSessionsOnAppLaunch:(id)launch;
+ (id)fetcherWithRequest:(id)request;
+ (id)fetcherWithURL:(id)url;
+ (id)fetcherWithURLString:(id)urlstring;
+ (id)fetcherWithDownloadResumeData:(id)data;
+ (id)fetcherWithSessionIdentifier:(id)identifier;
+ (id)sessionIdentifierToFetcherMap;
+ (_Bool)appAllowsInsecureRequests;
+ (id)fetcherUserDefaults;
+ (id)activePersistedBackgroundSessions;
+ (id)fetchersForBackgroundSessions;
+ (void)application:(id)application handleEventsForBackgroundURLSession:(id)urlsession completionHandler:(id /* block */)handler;
+ (id)staticCookieStorage;
+ (void)setGlobalTestBlock:(id /* block */)block;
+ (void)setSubstituteUIApplication:(id)uiapplication;
+ (id)substituteUIApplication;
+ (id)fetcherUIApplication;
+ (id)redirectURLWithOriginalRequestURL:(id)url redirectRequestURL:(id)url;
+ (void)evaluateServerTrust:(struct __SecTrust *)trust forRequest:(id)request completionHandler:(id /* block */)handler;
+ (void)setSystemCompletionHandler:(id /* block */)handler forSessionIdentifier:(id)identifier;
+ (id /* block */)systemCompletionHandlerForSessionIdentifier:(id)identifier;
+ (void)setLoggingEnabled:(_Bool)enabled;
+ (_Bool)isLoggingEnabled;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request;
- (id)initWithRequest:(id)request configuration:(id)configuration;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (void)beginFetchWithCompletionHandler:(id /* block */)handler;
- (void)beginFetchForRetry;
- (id /* block */)completionHandlerWithTarget:(id)target didFinishSelector:(SEL)selector;
- (void)beginFetchWithDelegate:(id)delegate didFinishSelector:(SEL)selector;
- (void)beginFetchMayDelay:(_Bool)delay mayAuthorize:(_Bool)authorize mayDecorate:(_Bool)decorate;
- (void)updateUserAgentAsynchronouslyForRequest:(id)request userAgentProvider:(id)provider mayDelay:(_Bool)delay mayAuthorize:(_Bool)authorize mayDecorate:(_Bool)decorate;
- (void)simulateFetchForTestBlock;
- (void)simulateByteTransferReportWithDataLength:(long long)length block:(id /* block */)block;
- (void)simulateDataCallbacksForTestBlockWithBodyData:(id)data response:(id)response responseData:(id)data error:(id)error;
- (void)simulateByteTransferWithData:(id)data block:(id /* block */)block;
- (void)addPersistedBackgroundSessionToDefaults;
- (void)removePersistedBackgroundSessionFromDefaults;
- (void)setSessionIdentifierInternal:(id)internal;
- (id)sessionIdentifierDefaultMetadata;
- (void)restoreDefaultStateForSessionIdentifierMetadata;
- (id)sessionIdentifierMetadata;
- (id)sessionIdentifierMetadataUnsynchronized;
- (id)createSessionIdentifierWithMetadata:(id)metadata;
- (void)failToBeginFetchWithError:(id)error;
- (void)endBackgroundTask;
- (void)authorizeRequest;
- (void)authorizer:(id)authorizer request:(id)request finishedWithError:(id)error;
- (void)applyDecoratorsAtRequestWillStart:(id)start startingAtIndex:(unsigned long long)index;
- (void)applyDecoratorsAtRequestDidFinish:(id)finish withData:(id)data error:(id)error startingAtIndex:(unsigned long long)index shouldReleaseCallbacks:(_Bool)callbacks;
- (_Bool)canFetchWithBackgroundSession;
- (_Bool)isFetching;
- (_Bool)isFetchingUnsynchronized;
- (id)responseUnsynchronized;
- (long long)statusCodeUnsynchronized;
- (id)responseHeadersUnsynchronized;
- (void)releaseCallbacks;
- (void)forgetSessionIdentifierForFetcher;
- (void)forgetSessionIdentifierForFetcherWithoutSyncCheck;
- (void)stopFetching;
- (void)stopFetchReleasingCallbacks:(_Bool)callbacks;
- (void)setStopNotificationNeeded:(_Bool)needed;
- (void)sendStopNotificationIfNeeded;
- (void)retryFetch;
- (_Bool)waitForCompletionWithTimeout:(double)timeout;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeDownloadTask:(id)task;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)respondToChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)invokeOnCallbackQueueUnlessStopped:(id /* block */)stopped;
- (void)invokeOnCallbackQueueAfterUserStopped:(_Bool)stopped block:(id /* block */)block;
- (void)invokeOnCallbackUnsynchronizedQueueAfterUserStopped:(_Bool)stopped block:(id /* block */)block;
- (void)invokeOnCallbackQueue:(id)queue afterUserStopped:(_Bool)stopped block:(id /* block */)block;
- (void)invokeFetchCallbacksOnCallbackQueueWithData:(id)data error:(id)error mayDecorate:(_Bool)decorate shouldReleaseCallbacks:(_Bool)callbacks;
- (void)postNotificationOnMainThreadWithName:(id)name userInfo:(id)info requireAsync:(_Bool)async;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)finishWithError:(id)error shouldRetry:(_Bool)retry;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (void)logNowWithError:(id)error;
- (_Bool)isRetryError:(id)error;
- (void)shouldRetryNowForStatus:(long long)status error:(id)error forceAssumeRetry:(_Bool)retry response:(id /* block */)response;
- (_Bool)hasRetryAfterInterval;
- (double)retryAfterInterval;
- (void)beginRetryTimer;
- (void)retryTimerFired:(id)fired;
- (void)destroyRetryTimer;
- (double)nextRetryIntervalUnsynchronized;
- (id)retryTimer;
- (_Bool)isRetryEnabled;
- (_Bool)isRetryEnabledUnsynchronized;
- (id /* block */)systemCompletionHandler;
- (void)setSystemCompletionHandler:(id /* block */)handler;
- (id)mutableRequestForTesting;
- (void)updateMutableRequest:(id)request;
- (void)setRequestValue:(id)value forHTTPHeaderField:(id)field;
- (void)updateRequestValue:(id)value forHTTPHeaderField:(id)field;
- (_Bool)isUsingBackgroundSession;
- (id)sessionNeedingInvalidation;
- (void)setSessionNeedingInvalidation:(id)invalidation;
- (_Bool)userStoppedFetching;
- (void)setProperty:(id)property forKey:(id)key;
- (id)propertyForKey:(id)key;
- (void)addPropertiesFromDictionary:(id)dictionary;
- (void)setCommentWithFormat:(id)format;

@end

#endif /* GTMSessionFetcher_h */
