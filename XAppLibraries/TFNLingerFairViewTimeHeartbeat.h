//
#ifndef TFNLingerFairViewTimeHeartbeat_h
#define TFNLingerFairViewTimeHeartbeat_h
@import Foundation;

@class NSHashTable, NSObject, TFSTimer;

@interface TFNLingerFairViewTimeHeartbeat : NSObject {
    /* instance variables */
    double _interval;
    NSHashTable *_trackers;
    TFSTimer *_timer;
    _Bool _isApplicationActive;
}

/* class methods */
+ (id)sharedHeartbeat;

/* instance methods */
- (id)initWithInterval:(double)interval;
- (void)dealloc;
- (void)addTracker:(id)tracker;
- (void)removeTracker:(id)tracker;
- (void)_tfn_handleAppWillResignActive;
- (void)_tfn_handleAppDidBecomeActive;
- (void)_tfn_heartbeatTimerFired;
- (void)_tfn_startTimerIfNeeded;
- (void)_tfn_stopTimerIfIdle;

@end

#endif /* TFNLingerFairViewTimeHeartbeat_h */
