//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
