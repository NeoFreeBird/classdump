//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModel_h
#define PTVModel_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"
#include "PTVLIFOQueue.h"
#include "PTVModelSession-Protocol.h"
#include "PTVModelSessionTaskClient-Protocol.h"
#include "PTVWorkServer.h"

@class NSObject, NSString;
@protocol PTVModelLoggingDelegate, PTVModelSSLPinningDelegate;

@interface PTVModel : NSObject <NSURLSessionDelegate, PTVModelSessionTaskClient>

@property (readonly, nonatomic) PTVLIFOQueue *networkQueue;
@property (readonly, nonatomic) PTVLIFOQueue *imageProcessingQueue;
@property (readonly, nonatomic) PTVLIFOQueue *imageDownloadingQueue;
@property (readonly, nonatomic) PTVWorkServer *networkWorkServer;
@property (readonly, nonatomic) PTVWorkServer *imageProcessingServer;
@property (readonly, nonatomic) PTVWorkServer *imageDownloadingServer;
@property (weak) id <PTVModelLoggingDelegate> logDelegate;
@property (weak) id <PTVModelSSLPinningDelegate> sslPinningDelegate;
@property (retain, nonatomic) id <PTVModelSession> session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)SharedInstance;
+ (id)IdempotenceQueue;
+ (unsigned long long)GenerateIdempotenceValueFromDate:(id)date;
+ (id)GenerateIdempotenceHeaderValueFromDate:(id)date;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key multiPartFile:(id)file completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key multiPartFile:(id)file canRetry:(_Bool)retry completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key multiPartFile:(id)file canRetry:(_Bool)retry canPostAuthErrors:(_Bool)errors shouldErrorOnStatusNoContent:(_Bool)content additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key multiPartFile:(id)file getCacheHandler:(id /* block */)handler setCacheHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)get:(id)get responseClass:(Class)_class queryParameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key canRetry:(_Bool)retry canPostAuthErrors:(_Bool)errors additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)put:(id)put responseClass:(Class)_class parameters:(id)parameters workClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key canRetry:(_Bool)retry canPostAuthErrors:(_Bool)errors additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters urlFormString:(id)string completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file urlFormString:(id)string additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file canRetry:(_Bool)retry useExtendedSessionTimeout:(_Bool)timeout completion:(id /* block */)completion;
- (void)post:(id)post responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file canRetry:(_Bool)retry canPostAuthErrors:(_Bool)errors additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)postAndPromote:(id)promote responseClass:(Class)_class parameters:(id)parameters completion:(id /* block */)completion;
- (void)postAndPromote:(id)promote responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file urlFormString:(id)string additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)get:(id)get responseClass:(Class)_class queryParameters:(id)parameters canPostAuthErrors:(_Bool)errors additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)get:(id)get responseClass:(Class)_class queryParameters:(id)parameters canPostAuthErrors:(_Bool)errors useExtendedSession:(_Bool)session additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)put:(id)put responseClass:(Class)_class parameters:(id)parameters canPostAuthErrors:(_Bool)errors additionalHTTPHeaders:(id)httpheaders completion:(id /* block */)completion;
- (void)delete:(id)_delete responseClass:(Class)_class postParameters:(id)parameters canPostAuthErrors:(_Bool)errors additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)patch:(id)patch responseClass:(Class)_class postParameters:(id)parameters canPostAuthErrors:(_Bool)errors additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)upload:(id)upload uploadData:(id)data contentType:(id)type contentLength:(id)length completion:(id /* block */)completion shouldLogOutOnAuthError:(_Bool)error;
- (void)getRemoteImage:(id)image cacheKey:(id)key cachePolicy:(long long)policy context:(id)context immediateBlock:(id /* block */)block eventualBlock:(id /* block */)block errorBlock:(id /* block */)block shouldExecuteEventually:(id /* block */)eventually shouldCache:(_Bool)cache completion:(id /* block */)completion;
- (void)processImageWork:(id /* block */)work forWorkClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key;
- (void)customRequestForWorkClient:(id)client cachePolicy:(long long)policy cacheKey:(id)key dataWorkBlock:(id /* block */)block;
- (void)pushCustomBlock:(id /* block */)block;
- (void)pushCustomRequest:(id)request completionBlock:(id /* block */)block;
- (void)resetNetworkQueueMaxSizeToDefault;
- (void)setMaxNetworkQueueSize:(long long)size;
- (void)setCacheObject:(id)object forKey:(id)key;
- (id)cacheObjectForKey:(id)key;
- (id)workQueue;
- (id)defaultHTTPHeaderParameters;
- (void)timedJSONPostRequest:(id)request responseClass:(Class)_class parameters:(id)parameters multiPartFile:(id)file completion:(id /* block */)completion;
- (void)timedImageGetRequest:(id)request completionBlock:(id /* block */)block;
- (void)_jsonData:(id)data method:(id)method responseClass:(Class)_class postParameters:(id)parameters getParameters:(id)parameters multiPartFile:(id)file urlFormString:(id)string canRetry:(_Bool)retry useExtendedSession:(_Bool)session canPostAuthErrors:(_Bool)errors additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)_jsonData:(id)data method:(id)method responseClass:(Class)_class postParameters:(id)parameters getParameters:(id)parameters multiPartFile:(id)file urlFormString:(id)string canRetry:(_Bool)retry useExtendedSession:(_Bool)session canPostAuthErrors:(_Bool)errors shouldErrorOnStatusNoContent:(_Bool)content additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)_jsonData:(id)data method:(id)method responseClass:(Class)_class postParameters:(id)parameters getParameters:(id)parameters multiPartFile:(id)file urlFormString:(id)string requestOriginDate:(id)date idempotenceValue:(id)value nRetriesAttempted:(long long)attempted retryQueue:(id)queue canRetry:(_Bool)retry useExtendedSession:(_Bool)session canPostAuthErrors:(_Bool)errors shouldErrorOnStatusNoContent:(_Bool)content additionalHeaderFields:(id)fields completion:(id /* block */)completion;
- (void)_imageData:(id)data completion:(id /* block */)completion;
- (_Bool)didRequestTimeOutWithResponse:(id)response error:(id)error;
- (_Bool)isTimedOutError:(id)error;
- (void)ptv_task:(id)ptv_task didCompleteWithResponse:(id)response data:(id)data error:(id)error bytesSent:(long long)sent bytesReceived:(long long)received;

@end

#endif /* PTVModel_h */
