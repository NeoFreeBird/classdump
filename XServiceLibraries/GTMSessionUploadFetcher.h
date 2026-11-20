//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMSessionUploadFetcher_h
#define GTMSessionUploadFetcher_h
@import Foundation;

#include "GTMSessionFetcher.h"

@class NSData, NSDictionary, NSFileHandle, NSObject, NSString, NSTimer, NSURL, NSURLRequest;
@protocol OS_dispatch_queue;

@interface GTMSessionUploadFetcher : GTMSessionFetcher {
    /* instance variables */
    long long _initialBodyLength;
    long long _initialBodySent;
    long long _uploadFileLength;
    double _nextUploadRetryInterval;
    _Bool _isPaused;
    _Bool _isRestartedUpload;
    NSTimer *_uploadRetryTimer;
    _Bool _useBackgroundSessionOnChunkFetchers;
    NSDictionary *_recentChunkReponseHeaders;
    long long _recentChunkStatusCode;
    _Bool _isSubdataGenerating;
    _Bool _isCancelInFlight;
}

@property (retain) NSURLRequest *lastChunkRequest;
@property long long currentOffset;
@property (retain) GTMSessionFetcher *fetcherInFlight;
@property _Bool subdataGenerating;
@property _Bool shouldInitiateOffsetQuery;
@property long long uploadGranularity;
@property _Bool allowsCellularAccess;
@property (retain) NSURL *uploadLocationURL;
@property (retain) NSData *uploadData;
@property (retain) NSURL *uploadFileURL;
@property (retain) NSFileHandle *uploadFileHandle;
@property (readonly, copy) id /* block */ uploadDataProvider;
@property (copy) NSString *uploadMIMEType;
@property (readonly) long long chunkSize;
@property double uploadRetryFactor;
@property double maxUploadRetryInterval;
@property double minUploadRetryInterval;
@property (retain) GTMSessionFetcher *chunkFetcher;
@property (readonly) GTMSessionFetcher *activeFetcher;
@property long long statusCode;
@property (copy) id /* block */ cancellationHandler;
@property (readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly) id /* block */ delegateCompletionHandler;

/* class methods */
+ (void)load;
+ (void)reconnectFetchersForBackgroundSessionsOnAppLaunch:(id)launch;
+ (id)uploadFetcherWithRequest:(id)request uploadMIMEType:(id)mimetype chunkSize:(long long)size fetcherService:(id)service;
+ (id)uploadFetcherWithLocation:(id)location uploadMIMEType:(id)mimetype chunkSize:(long long)size fetcherService:(id)service;
+ (id)uploadFetcherWithLocation:(id)location uploadMIMEType:(id)mimetype chunkSize:(long long)size allowsCellularAccess:(_Bool)access fetcherService:(id)service;
+ (id)uploadFetcherForSessionIdentifierMetadata:(id)metadata;
+ (id)uploadFetcherWithRequest:(id)request fetcherService:(id)service;
+ (id)uploadFetcherPointerArrayForBackgroundSessions;
+ (id)uploadFetcherForSessionIdentifier:(id)identifier;
+ (id)uploadFetchersForBackgroundSessions;
+ (unsigned long long)uploadStatusFromResponseHeaders:(id)headers;
+ (void)removePointer:(void *)pointer fromPointerArray:(id)array;

/* instance methods */
- (double)nextUploadRetryIntervalUnsynchronized;
- (void)setUploadFileLength:(long long)length;
- (void)setUploadDataLength:(long long)length provider:(id /* block */)provider;
- (void)setupRequestHeaders;
- (void)setLocationURL:(id)url uploadMIMEType:(id)mimetype chunkSize:(long long)size allowsCellularAccess:(_Bool)access;
- (long long)fullUploadLength;
- (void)generateChunkSubdataWithOffset:(long long)offset length:(long long)length response:(id /* block */)response;
- (void)generateChunkSubdataFromFileHandle:(id)handle offset:(long long)offset length:(long long)length response:(id /* block */)response;
- (void)generateChunkSubdataFromFileURL:(id)url offset:(long long)offset length:(long long)length response:(id /* block */)response;
- (id)uploadChunkUnavailableErrorWithDescription:(id)description;
- (id)prematureFailureErrorWithUserInfo:(id)info;
- (void)setCompletionHandler:(id /* block */)handler;
- (_Bool)isRestartedUpload;
- (void)beginFetchForRetry;
- (void)destroyUploadRetryTimer;
- (void)beginFetchWithCompletionHandler:(id /* block */)handler;
- (void)beginChunkFetches;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (void)invokeFinalCallbackWithData:(id)data error:(id)error shouldInvalidateLocation:(_Bool)location;
- (void)releaseUploadAndBaseCallbacks:(_Bool)callbacks;
- (void)stopFetchReleasingCallbacks:(_Bool)callbacks;
- (void)uploadNextChunkWithOffset:(long long)offset;
- (void)sendQueryForUploadOffsetWithFetcherProperties:(id)properties;
- (void)queryFetcher:(id)fetcher finishedWithData:(id)data error:(id)error;
- (void)sendCancelUploadWithFetcherProperties:(id)properties;
- (void)uploadNextChunkWithOffset:(long long)offset fetcherProperties:(id)properties;
- (void)beginUploadRetryTimer;
- (void)uploadRetryTimerFired:(id)fired;
- (id)uploadRetryTimer;
- (void)beginChunkFetcher:(id)fetcher offset:(long long)offset;
- (void)attachSendProgressBlockToChunkFetcher:(id)fetcher;
- (id)uploadSessionIdentifierMetadata;
- (id)uploadFetcherWithProperties:(id)properties isQueryFetch:(_Bool)fetch;
- (void)chunkFetcher:(id)fetcher finishedWithData:(id)data error:(id)error;
- (void)destroyChunkFetcher;
- (void)invokeDelegateWithDidSendBytes:(long long)bytes totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)retrieveUploadChunkGranularityFromResponseHeaders:(id)headers;
- (_Bool)isPaused;
- (void)pauseFetching;
- (void)resumeFetching;
- (void)stopFetching;
- (_Bool)triggerCancellationHandlerForFetch:(id)fetch data:(id)data error:(id)error;
- (long long)updateChunkFetcher:(id)fetcher forChunkAtOffset:(long long)offset;
- (_Bool)useBackgroundSession;
- (void)setUseBackgroundSession:(_Bool)session;
- (_Bool)canFetchWithBackgroundSession;
- (id)responseHeaders;
- (long long)statusCodeUnsynchronized;
- (long long)initialBodyLength;
- (void)setInitialBodyLength:(long long)length;
- (long long)initialBodySent;
- (void)setInitialBodySent:(long long)sent;
- (_Bool)isFetching;
- (_Bool)waitForCompletionWithTimeout:(double)timeout;
- (_Bool)isSubdataGenerating;

@end

#endif /* GTMSessionUploadFetcher_h */
