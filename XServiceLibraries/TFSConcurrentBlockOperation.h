//
#ifndef TFSConcurrentBlockOperation_h
#define TFSConcurrentBlockOperation_h
@import Foundation;

#include "TFSConcurrentOperation.h"

@interface TFSConcurrentBlockOperation : TFSConcurrentOperation

@property (readonly, nonatomic) id /* block */ block;

/* instance methods */
- (id)init;
- (id)initWithBlock:(id /* block */)block;
- (id)initWithMainQueueBlock:(id /* block */)block;
- (void)run;

@end

#endif /* TFSConcurrentBlockOperation_h */
