//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
