//
#ifndef TFSThrottledBlock_h
#define TFSThrottledBlock_h
@import Foundation;

@class NSObject, NSOperationQueue;

@interface TFSThrottledBlock : NSObject {
    /* instance variables */
    struct atomic_flag { _Atomic _Bool _Value; } _isScheduledFlag;
}

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) double cooldown;
@property (readonly, nonatomic) NSOperationQueue *queue;

/* instance methods */
- (id)initWithCooldown:(double)cooldown block:(id /* block */)block;
- (void)attemptInvoke;
- (id)subthrottleWithCooldown:(double)cooldown;
- (void)dependencyDidRun:(id)run;

@end

#endif /* TFSThrottledBlock_h */
