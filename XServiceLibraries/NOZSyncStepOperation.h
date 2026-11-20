//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZSyncStepOperation_h
#define NOZSyncStepOperation_h
@import Foundation;

@class NSError, NSOperation;

@interface NOZSyncStepOperation : NSOperation {
    /* instance variables */
    unsigned long long _stepCount;
    long long * _stepWeights;
    float * _currentStepProgress;
    long long _totalWeight;
    struct atomic_flag { _Atomic _Bool _Value; } _finishedFlag;
    _Bool _internalIsCancelled;
}

@property _Bool cancelled;
@property (readonly, nonatomic) float progress;
@property (readonly) NSError *operationError;
@property (retain, nonatomic) id context;

/* class methods */
+ (id)operationCancelledError;

/* instance methods */
- (unsigned long long)numberOfSteps;
- (long long)weightForStep:(unsigned long long)step;
- (_Bool)runStep:(unsigned long long)step error:(out id *)error;
- (void)handleProgressUpdated:(float)updated;
- (void)handleFinishing;
- (void)updateProgress:(float)progress forStep:(unsigned long long)step;
- (void)dealloc;
- (void)main;
- (void)start;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)cancel;
- (_Bool)isCancelled;

@end

#endif /* NOZSyncStepOperation_h */
