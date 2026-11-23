//
#ifndef TNLTimeoutOperation_h
#define TNLTimeoutOperation_h
@import Foundation;

#include "TNLSafeOperation.h"

@interface TNLTimeoutOperation : TNLSafeOperation {
    /* instance variables */
    _Atomic _Bool _executingFlag;
    _Atomic _Bool _finishedFlag;
    double _timeoutDuration;
}

/* instance methods */
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)start;

@end

#endif /* TNLTimeoutOperation_h */
