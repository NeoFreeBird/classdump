//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLURLSessionTaskOperation_h
#define TNLURLSessionTaskOperation_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDownloadDelegate-Protocol.h"
#include "OS_dispatch_source-Protocol.h"
#include "TNLContentDecoder-Protocol.h"
#include "TNLContentDecoderClient-Protocol.h"
#include "TNLContentDecoderContext-Protocol.h"
#include "TNLRequest-Protocol.h"
#include "TNLRequestConfiguration.h"
#include "TNLRequestOperation.h"
#include "TNLRequestOperationQueue.h"
#include "TNLResponse.h"
#include "TNLResponseInfo.h"
#include "TNLSafeOperation.h"
#include "TNLTemporaryFile.h"
#include "TNLURLSessionManager-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSObject, NSString, NSURLRequest, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionTask, NSURLSessionTaskMetrics, NSURLSessionUploadTask;
@protocol TNLURLSessionTaskOperationDelegate;

@interface TNLURLSessionTaskOperation : TNLSafeOperation <TNLContentDecoderClient, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {
    /* instance variables */
    id <TNLURLSessionManager> _sessionManager;
    NSURLSession *_URLSession;
    NSURLSessionDataTask *_dataTask;
    NSURLSessionDownloadTask *_downloadTask;
    NSURLSessionUploadTask *_uploadTask;
    NSURLRequest *_taskRequest;
    NSData *_uploadData;
    NSString *_uploadFilePath;
    NSData *_resumeData;
    id <TNLRequest> _hydratedRequest;
    Class _responseClass;
    NSDate *_startDate;
    unsigned long long _startMachTime;
    NSDate *_endDate;
    unsigned long long _endMachTime;
    NSDate *_completeDate;
    unsigned long long _completeMachTime;
    long long _taskResumePriority;
    NSDate *_taskResumeDate;
    NSDate *_responseBodyStartDate;
    NSDate *_responseBodyEndDate;
    NSDate *_completionCallbackDate;
    NSDate *_taskMetricsCallbackDate;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSError *_cachedFailure;
    NSHTTPURLResponse *_cancelledRedirectResponse;
    NSURLSession *_cachedCompletionSession;
    NSURLSessionTask *_cachedCompletionTask;
    NSError *_cachedCompletionError;
    void * _hashContextRef;
    NSData *_hashData;
    long long _hashAlgo;
    NSDictionary *_authChallengeCancelledUserInfo;
    NSMutableData *_storedData;
    TNLTemporaryFile *_tempFile;
    long long _layer8BodyBytesReceived;
    double _responseDecodeLatency;
    NSURLSessionTaskMetrics *_taskMetrics;
    _Atomic long long _internalState;
    struct { unsigned int didCancel:1; unsigned int didStart:1; unsigned int didIncrementExecutionCount:1; unsigned int shouldComputeHash:1; unsigned int isComputingHash:1; unsigned int isFinalizing:1; unsigned int useIdleTimeout:1; unsigned int useIdleTimeoutForInitialConnection:1; unsigned int shouldCaptureResponse:1; unsigned int encounteredCompletionBeforeTaskMetrics:1; unsigned int shouldDeleteUploadFile:1; unsigned int cancelRedirectAndCompleteTask:1; } _flags;
    _Bool _isObservingURLSessionTask;
    TNLRequestOperationQueue *_requestOperationQueue;
    long long _executionMode;
    long long _requestPriority;
    TNLRequestConfiguration *_requestConfiguration;
    TNLResponseInfo *_responseInfo;
    TNLResponse *_finalResponse;
    NSURLRequest *_hydratedURLRequest;
    TNLRequestOperation<TNLURLSessionTaskOperationDelegate> *_requestOperation;
    NSError *_error;
    NSDictionary *_additionalDecoders;
    id <TNLContentDecoder> _contentDecoder;
    id <TNLContentDecoderContext> _contentDecoderContext;
    NSMutableData *_contentDecoderRecentData;
    id <TNLRequest> _originalRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)network_metaDataWithLowerCaseHeaderFields:(id)fields;
- (id)network_taskMetrics;
- (id)init;
- (void)dealloc;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (void)start;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession taskIsWaitingForConnectivity:(id)connectivity;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;
- (_Bool)tnl_dataWasDecoded:(id)decoded error:(out id *)error;

@end

#endif /* TNLURLSessionTaskOperation_h */
