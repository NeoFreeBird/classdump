//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFIFOQueue_h
#define PTVFIFOQueue_h
@import Foundation;

#include "PTVQueue.h"

@interface PTVFIFOQueue : PTVQueue

/* instance methods */
- (id)nextBlock;
- (void)promote:(int)promote;
- (void)executePromote:(int)promote;

@end

#endif /* PTVFIFOQueue_h */
