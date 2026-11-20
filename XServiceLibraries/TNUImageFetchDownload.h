//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUImageFetchDownload_h
#define TNUImageFetchDownload_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"
#include "TIPImageFetchDownload-Protocol.h"
#include "TIPImageFetchDownloadContext-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"
#include "TNLRequestOperation.h"

@class NSObject, NSString, NSURLRequest;
@protocol OS_dispatch_queue;

@interface TNUImageFetchDownload : NSObject <TNLRequestDelegate, TIPImageFetchDownload> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
    struct { unsigned int stub:1; unsigned int cancelled:1; } _flags;
}

@property (retain, nonatomic) TNLRequestOperation *operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TIPImageFetchDownloadContext> context;
@property (readonly, nonatomic) NSURLRequest *finalURLRequest;
@property (readonly, nonatomic) id downloadMetrics;
@property (nonatomic) long long priority;

/* class methods */
+ (void)setStallTimeoutDuration:(double)duration;
+ (double)stallTimeoutDuration;
+ (id)imageRequestOperationQueue;

/* instance methods */
- (id)initWithContext:(id)context stubbingEnabled:(_Bool)enabled;
- (void)start;
- (void)cancelWithDescription:(id)description;
- (void)discardContext;
- (void)tnl_requestOperation:(id)operation hydrateRequest:(id)request completion:(id /* block */)completion;
- (void)tnl_requestOperation:(id)operation authorizeURLRequest:(id)urlrequest completion:(id /* block */)completion;
- (void)tnl_requestOperation:(id)operation didTransitionFromState:(long long)state toState:(long long)state;
- (void)tnl_requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)tnl_requestOperation:(id)operation didReceiveData:(id)data;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response policyProvider:(id)provider afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response policyProvider:(id)provider;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (id)tnl_completionQueueForRequestOperation:(id)operation;
- (id)tnl_delegateQueueForRequestOperation:(id)operation;

@end

#endif /* TNUImageFetchDownload_h */
