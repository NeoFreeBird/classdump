//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSessionTaskDelegate_Protocol_h
#define NSURLSessionTaskDelegate_Protocol_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"

@protocol NSURLSessionTaskDelegate <NSURLSessionDelegate>

@required

@optional

/* optional instance methods */
- (void)URLSession:(id)urlsession didCreateTask:(id)task;
- (void)URLSession:(id)urlsession didCreateTask:(id)task;
- (void)URLSession:(id)urlsession task:(id)task willBeginDelayedRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task willBeginDelayedRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession taskIsWaitingForConnectivity:(id)connectivity;
- (void)URLSession:(id)urlsession taskIsWaitingForConnectivity:(id)connectivity;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStreamFromOffset:(long long)offset completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStreamFromOffset:(long long)offset completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didReceiveInformationalResponse:(id)response;
- (void)URLSession:(id)urlsession task:(id)task didReceiveInformationalResponse:(id)response;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;

@end

#endif /* NSURLSessionTaskDelegate_Protocol_h */
