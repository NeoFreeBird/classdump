//
#ifndef TNLFakeRequestOperation_h
#define TNLFakeRequestOperation_h
@import Foundation;

#include "TNLRequestOperation.h"
#include "TNLURLSessionTaskOperation.h"

@interface TNLFakeRequestOperation : TNLRequestOperation {
    /* instance variables */
    TNLURLSessionTaskOperation *_ownedURLSessionTaskOperation;
}

/* instance methods */
- (id)init;
- (id)URLSessionTaskOperation;
- (long long)operationId;
- (id)requestOperationQueue;
- (id)requestConfiguration;
- (id)requestDelegate;
- (id)originalRequest;
- (id)hydratedRequest;
- (id)response;
- (id)error;
- (long long)state;
- (unsigned long long)attemptCount;
- (unsigned long long)retryCount;
- (unsigned long long)redirectCount;
- (float)downloadProgress;
- (float)uploadProgress;
- (id)context;
- (long long)priority;
- (void)cancelWithSource:(id)source underlyingError:(id)error;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithoutBlockingRunLoop;

@end

#endif /* TNLFakeRequestOperation_h */
