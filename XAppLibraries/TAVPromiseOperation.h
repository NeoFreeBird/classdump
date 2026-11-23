//
#ifndef TAVPromiseOperation_h
#define TAVPromiseOperation_h
@import Foundation;

#include "TAVAsynchronousBlockOperation.h"

@class NSError;

@interface TAVPromiseOperation : TAVAsynchronousBlockOperation

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)resolveWithResult:(id)result;
- (void)rejectWithError:(id)error;
- (void)completeOperation;

@end

#endif /* TAVPromiseOperation_h */
