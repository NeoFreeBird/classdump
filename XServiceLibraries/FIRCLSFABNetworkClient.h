//
#ifndef FIRCLSFABNetworkClient_h
#define FIRCLSFABNetworkClient_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject, NSString, NSURLSession;

@interface FIRCLSFABNetworkClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (id)initWithSessionConfiguration:(id)configuration queue:(id)queue;
- (void)dealloc;
- (double)randomDoubleWithMin:(double)min max:(double)max;
- (double)generateRandomJitter;
- (double)computeDelayForResponse:(id)response withRetryCount:(unsigned long long)count;
- (void)runAfterRetryValueFromResponse:(id)response attempts:(unsigned long long)attempts onQueue:(id)queue block:(id /* block */)block;
- (void)runAfterRetryValueFromResponse:(id)response attempts:(unsigned long long)attempts block:(id /* block */)block;
- (void)startDataTaskWithRequest:(id)request retryLimit:(unsigned long long)limit tries:(unsigned long long)tries completionHandler:(id /* block */)handler;
- (void)startDataTaskWithRequest:(id)request retryLimit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)startDataTaskWithRequest:(id)request completionHandler:(id /* block */)handler;
- (void)startDownloadTaskWithRequest:(id)request retryLimit:(unsigned long long)limit tries:(unsigned long long)tries completionHandler:(id /* block */)handler;
- (void)startDownloadTaskWithRequest:(id)request retryLimit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)startDownloadTaskWithRequest:(id)request completionHandler:(id /* block */)handler;
- (void)invalidateAndCancel;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;

@end

#endif /* FIRCLSFABNetworkClient_h */
