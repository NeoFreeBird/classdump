//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMSessionFetcherSessionDelegateDispatcher_h
#define GTMSessionFetcherSessionDelegateDispatcher_h
@import Foundation;

#include "GTMSessionFetcherService.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, NSTimer, NSURLSession;

@interface GTMSessionFetcherSessionDelegateDispatcher : NSObject <NSURLSessionDelegate> {
    /* instance variables */
    GTMSessionFetcherService *_parentService;
    NSMutableDictionary *_taskToFetcherMap;
}

@property (retain) NSURLSession *session;
@property double discardInterval;
@property (readonly) NSTimer *discardTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithParentService:(id)service sessionDiscardInterval:(double)interval;
- (void)startDiscardTimer;
- (void)destroyDiscardTimer;
- (void)discardTimerFired:(id)fired;
- (void)abandon;
- (void)startSessionUsage;
- (void)destroySessionAndTimer;
- (void)setFetcher:(id)fetcher forTask:(id)task;
- (void)removeFetcher:(id)fetcher;
- (id)fetcherForTask:(id)task;
- (void)removeTaskFromMap:(id)map;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeDownloadTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;

@end

#endif /* GTMSessionFetcherSessionDelegateDispatcher_h */
