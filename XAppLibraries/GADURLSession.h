//
#ifndef GADURLSession_h
#define GADURLSession_h
@import Foundation;

#include "GADURLSessionTransactionMonitor.h"

@class NSObject, NSOperationQueue, NSURLSession;

@interface GADURLSession : NSObject {
    /* instance variables */
    NSURLSession *_session;
    GADURLSessionTransactionMonitor *_taskMonitor;
    _Bool _valid;
    NSOperationQueue *_lockQueue;
}

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)init;
- (void)dealloc;
- (void)sendRequest:(id)request withContext:(id)context notificationPolicy:(long long)policy completionHandler:(id /* block */)handler;
- (void)invalidateAndCancel;

@end

#endif /* GADURLSession_h */
