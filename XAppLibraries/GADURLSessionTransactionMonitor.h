//
#ifndef GADURLSessionTransactionMonitor_h
#define GADURLSessionTransactionMonitor_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group;

@interface GADURLSessionTransactionMonitor : NSObject <NSURLSessionDataDelegate> {
    /* instance variables */
    NSMutableDictionary *_transactionsByTask;
    NSObject<OS_dispatch_group> *_completionGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)waitForTransactionsWithCompletion:(id /* block */)completion;
- (void)addTransaction:(id)transaction forTask:(id)task;
- (void)removeTask:(id)task;
- (void)invalidateAllTasksWithError:(id)error;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;

@end

#endif /* GADURLSessionTransactionMonitor_h */
