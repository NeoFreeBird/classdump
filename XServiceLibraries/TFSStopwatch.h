//
#ifndef TFSStopwatch_h
#define TFSStopwatch_h
@import Foundation;

@class NSObject;

@interface TFSStopwatch : NSObject

@property (nonatomic) double startIntervalSinceLaunch;
@property (nonatomic) double intervalSinceLaunchForTimeIntervalMethod;

/* instance methods */
- (id)init;
- (id)initWithTimeIntervalSinceStart:(double)start;
- (double)timeInterval;
- (double)timeIntervalSinceStart;

@end

#endif /* TFSStopwatch_h */
