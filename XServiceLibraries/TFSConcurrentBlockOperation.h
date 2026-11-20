//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
