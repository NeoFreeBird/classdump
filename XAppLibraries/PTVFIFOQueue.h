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
