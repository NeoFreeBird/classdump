//
#ifndef TFSStateQueue_h
#define TFSStateQueue_h
@import Foundation;

#include "TFSAbstractStateQueue.h"

@interface TFSStateQueue : TFSAbstractStateQueue

/* instance methods */
- (id)initWithState:(id)state;
- (void)atomically:(id /* block */)atomically;

@end

#endif /* TFSStateQueue_h */
