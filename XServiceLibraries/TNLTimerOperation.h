//
#ifndef TNLTimerOperation_h
#define TNLTimerOperation_h
@import Foundation;

#include "TNLSafeOperation.h"

@interface TNLTimerOperation : TNLSafeOperation {
    /* instance variables */
    double _delay;
    _Atomic _Bool _finished;
    _Atomic _Bool _executing;
}

/* instance methods */
- (id)init;
- (void)start;
- (void)run;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)completeOperation;

@end

#endif /* TNLTimerOperation_h */
