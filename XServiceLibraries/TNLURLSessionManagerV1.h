//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLURLSessionManagerV1_h
#define TNLURLSessionManagerV1_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDownloadDelegate-Protocol.h"
#include "TNLBackoffBehaviorProvider-Protocol.h"
#include "TNLURLSessionManager-Protocol.h"

@class NSObject, NSString;

@interface TNLURLSessionManagerV1 : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, TNLURLSessionManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long backoffMode;
@property (retain) id <TNLBackoffBehaviorProvider> backoffBehaviorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)version;
+ (id)internalSharedInstance;

/* instance methods */
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;
- (void)URLSession:(id)urlsession taskIsWaitingForConnectivity:(id)connectivity;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;
- (id)initInternal;
- (void)cancelAllForQueue:(id)queue source:(id)source underlyingError:(id)error;
- (void)findURLSessionTaskOperationForRequestOperationQueue:(id)queue requestOperation:(id)operation complete:(id /* block */)complete;
- (void)getAllURLSessions:(id /* block */)urlsessions;
- (_Bool)handleBackgroundURLSessionEvents:(id)events completionHandler:(id /* block */)handler;
- (void)URLSessionDidCompleteBackgroundEvents:(id)events;
- (void)URLSessionDidCompleteBackgroundTask:(unsigned long long)task sessionConfigIdentifier:(id)identifier sharedContainerIdentifier:(id)identifier request:(id)request response:(id)response pairedOperation:(id)operation;
- (void)syncAddURLSessionTaskOperation:(id)operation;
- (void)applyBackoffDependenciesToOperation:(id)operation withURL:(id)url host:(id)host isLongPollRequest:(_Bool)request;
- (void)backoffSignalEncounteredForURL:(id)url host:(id)host responseHTTPHeaders:(id)httpheaders;
- (void)pruneUnusedURLSessions;
- (void)pruneURLSessionMatchingRequestConfiguration:(id)configuration operationQueueId:(id)id;

@end

#endif /* TNLURLSessionManagerV1_h */
