//
#ifndef PTVLIFOQueue_h
#define PTVLIFOQueue_h
@import Foundation;

#include "PTVQueue.h"

@interface PTVLIFOQueue : PTVQueue

/* instance methods */
- (id)nextBlock;
- (void)executePromote:(int)promote;

@end

#endif /* PTVLIFOQueue_h */
