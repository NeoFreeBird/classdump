//
#ifndef TFSNullableValueStateQueue_h
#define TFSNullableValueStateQueue_h
@import Foundation;

#include "TFSAbstractStateQueue.h"

@interface TFSNullableValueStateQueue : TFSAbstractStateQueue

/* instance methods */
- (id)initWithState:(id)state;
- (id)init;
- (void)atomically:(id /* block */)atomically;

@end

#endif /* TFSNullableValueStateQueue_h */
