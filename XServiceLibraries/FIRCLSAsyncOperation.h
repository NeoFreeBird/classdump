//
#ifndef FIRCLSAsyncOperation_h
#define FIRCLSAsyncOperation_h
@import Foundation;

@class NSOperation, NSRecursiveLock;

@interface FIRCLSAsyncOperation : NSOperation {
    /* instance variables */
    _Bool _internalExecuting;
    _Bool _internalFinished;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (copy, nonatomic) id /* block */ asyncCompletion;

/* instance methods */
- (id)init;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)start;
- (void)changeValueForKey:(id)key inBlock:(id /* block */)block;
- (void)lock:(id /* block */)lock;
- (_Bool)checkForCancellation;
- (void)unlockedMarkFinished;
- (void)unlockedMarkStarted;
- (void)unlockedMarkComplete;
- (void)markStarted;
- (void)markDone;

@end

#endif /* FIRCLSAsyncOperation_h */
