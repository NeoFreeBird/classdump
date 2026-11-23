//
#ifndef TFSValueStateQueue_h
#define TFSValueStateQueue_h
@import Foundation;

#include "TFSAbstractStateQueue.h"

@interface TFSValueStateQueue : TFSAbstractStateQueue

/* instance methods */
- (id)initWithState:(id)state;
- (void)atomically:(id /* block */)atomically;

@end

#endif /* TFSValueStateQueue_h */
