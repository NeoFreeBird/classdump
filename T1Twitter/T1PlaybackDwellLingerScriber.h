//
#ifndef T1PlaybackDwellLingerScriber_h
#define T1PlaybackDwellLingerScriber_h
@import Foundation;

@class NSObject;

@interface T1PlaybackDwellLingerScriber : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *emitter;
    NSNumber"16@0:8 *stopwatch;
    NSNumber"16@0:8 *periodicFlushInterval;
    NSNumber"16@0:8 *periodicFlushTimer;
}

/* instance methods */
- (id)initWithAccount:(id)account status:(id)status page:(id)page periodicFlushInterval:(double)interval;
- (void)dealloc;
- (void)setAccruing:(_Bool)accruing;
- (void)flushAndResume;
- (id)init;

@end

#endif /* T1PlaybackDwellLingerScriber_h */
