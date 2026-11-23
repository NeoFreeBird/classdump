//
#ifndef NOZCompressOperation_h
#define NOZCompressOperation_h
@import Foundation;

#include "NOZCompressDelegate-Protocol.h"
#include "NOZCompressRequest.h"
#include "NOZCompressResult.h"
#include "NOZSyncStepOperation.h"
#include "NOZZipper.h"

@interface NOZCompressOperation : NOZSyncStepOperation {
    /* instance variables */
    NOZZipper *_zipper;
    id <NOZCompressDelegate> _strongDelegate;
    id <NOZCompressDelegate> _weakDelegate;
    double _startTime;
    long long _totalUncompressedBytes;
    long long _finishedUncompressedBytes;
    struct { unsigned int delegateUpdatesProgress:1; } _flags;
}

@property (readonly, nonatomic) NOZCompressRequest *request;
@property (readonly, weak, nonatomic) id <NOZCompressDelegate> delegate;
@property (readonly, nonatomic) NOZCompressResult *result;

/* class methods */
+ (id)operationCancelledError;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request delegate:(id)delegate;
- (id)initWithRequest:(id)request completion:(id /* block */)completion;
- (void)main;
- (unsigned long long)numberOfSteps;
- (long long)weightForStep:(unsigned long long)step;
- (_Bool)runStep:(unsigned long long)step error:(out id *)error;
- (void)handleProgressUpdated:(float)updated;
- (void)handleFinishing;

@end

#endif /* NOZCompressOperation_h */
