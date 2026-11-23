//
#ifndef FIRCLSCompoundOperation_h
#define FIRCLSCompoundOperation_h
@import Foundation;

#include "FIRCLSFABAsyncOperation.h"

@class NSArray, NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface FIRCLSCompoundOperation : FIRCLSFABAsyncOperation

@property (retain, nonatomic) NSOperationQueue *compoundQueue;
@property (nonatomic) unsigned long long completedOperations;
@property (retain, nonatomic) NSMutableArray *errors;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *countingQueue;
@property (copy, nonatomic) NSArray *operations;

/* instance methods */
- (id)init;
- (void)main;
- (void)cancel;
- (void)injectCompoundAsyncCompletionInOperation:(id)operation;
- (void)injectCompoundSyncCompletionInOperation:(id)operation;
- (void)updateCompletionCountsWithError:(id)error;
- (void)attemptCompoundCompletion;

@end

#endif /* FIRCLSCompoundOperation_h */
