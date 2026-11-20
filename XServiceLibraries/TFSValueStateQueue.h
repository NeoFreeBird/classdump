//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
