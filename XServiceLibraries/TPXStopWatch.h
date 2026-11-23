//
#ifndef TPXStopWatch_h
#define TPXStopWatch_h
@import Foundation;

@class NSObject;

@interface TPXStopWatch : NSObject {
    /* instance variables */
    double _referenceTime;
    _Bool _running;
}

@property (readonly, nonatomic) double lapTime;
@property (readonly, nonatomic) double elapsedTime;

/* class methods */
+ (id)stopWatch;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)restart;
- (double)recordLapTime;
- (void)updateElapsedTime;

@end

#endif /* TPXStopWatch_h */
