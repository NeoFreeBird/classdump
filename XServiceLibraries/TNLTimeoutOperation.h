//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
