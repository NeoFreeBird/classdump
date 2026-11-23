//
#ifndef TFNLingerFairViewTimeTracker_h
#define TFNLingerFairViewTimeTracker_h
@import Foundation;

@class NSObject;

@interface TFNLingerFairViewTimeTracker : NSObject {
    /* instance variables */
    id /* block */ _clock;
    double _visibleShare;
    double _lastUpdateTime;
    _Bool _hasStarted;
}

@property (readonly, nonatomic) double accumulatedFairViewTime;
@property (copy, nonatomic) id /* block */ shareProvider;

/* instance methods */
- (id)init;
- (id)initWithClock:(id /* block */)clock;
- (double)_pendingAccrualAtTime:(double)time;
- (void)updateWithVisibleShare:(double)share;
- (void)sampleNow;
- (void)pause;
- (void)reset;

@end

#endif /* TFNLingerFairViewTimeTracker_h */
