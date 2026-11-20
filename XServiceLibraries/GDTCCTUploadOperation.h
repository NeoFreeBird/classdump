//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCCTUploadOperation_h
#define GDTCCTUploadOperation_h
@import Foundation;

#include "GDTCCTUploadMetadataProvider-Protocol.h"
#include "GDTCORMetrics.h"
#include "GDTCORMetricsControllerProtocol-Protocol.h"
#include "GDTCORStoragePromiseProtocol-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NSObject, NSOperation, NSString, NSURL, NSURLSession, NSURLSessionUploadTask;
@protocol OS_dispatch_queue;

@interface GDTCCTUploadOperation : NSOperation <NSURLSessionDelegate>

@property (readonly, nonatomic) long long target;
@property (readonly, nonatomic) long long conditions;
@property (readonly, nonatomic) NSURL *uploadURL;
@property (readonly, nonatomic) id <GDTCORStoragePromiseProtocol> storage;
@property (readonly, nonatomic) id <GDTCCTUploadMetadataProvider> metadataProvider;
@property (readonly, nonatomic) id <GDTCORMetricsControllerProtocol> metricsController;
@property (retain, nonatomic) NSURLSession *uploaderSession;
@property (retain, nonatomic) GDTCORMetrics *currentMetrics;
@property (nonatomic) _Bool executing;
@property (nonatomic) _Bool finished;
@property (nonatomic) _Bool uploadAttempted;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *uploaderQueue;
@property (readonly, nonatomic) NSURLSessionUploadTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)noop;

/* instance methods */
- (id)initWithTarget:(long long)target conditions:(long long)conditions uploadURL:(id)url queue:(id)queue storage:(id)storage metadataProvider:(id)provider metricsController:(id)controller;
- (id)uploaderSessionCreateIfNeeded;
- (void)uploadTarget:(long long)target withConditions:(long long)conditions;
- (id)uploadBatch:(id)batch toTarget:(long long)target storage:(id)storage;
- (id)processResponse:(id)response forBatch:(id)batch storage:(id)storage;
- (id)sendURLRequestWithBatch:(id)batch target:(long long)target;
- (void)updateNextUploadTimeWithResponse:(id)response forTarget:(long long)target;
- (id)isReadyToUploadTarget:(long long)target conditions:(long long)conditions;
- (id)genericRejectedPromiseErrorWithReason:(id)reason;
- (_Bool)readyToUploadTarget:(long long)target conditions:(long long)conditions;
- (id)constructRequestProtoWithEvents:(id)events;
- (id)constructRequestWithURL:(id)url forTarget:(long long)target data:(id)data;
- (id)eventSelectorTarget:(long long)target withConditions:(long long)conditions;
- (id)batchByAddingMetricsEventToBatch:(id)batch forTarget:(long long)target;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)startOperation;
- (void)finishOperation;
- (void)start;
- (void)cancel;

@end

#endif /* GDTCCTUploadOperation_h */
