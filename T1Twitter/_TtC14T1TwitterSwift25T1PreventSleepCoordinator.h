//
#ifndef _TtC14T1TwitterSwift25T1PreventSleepCoordinator_h
#define _TtC14T1TwitterSwift25T1PreventSleepCoordinator_h
@import Foundation;

@class NSObject, Swift.Bool, _$sSd, _$sSo7NSTimerCSg, _$sypSg;

@interface T1TwitterSwift.T1PreventSleepCoordinator : NSObject { // (Swift)
    /* instance variables */
    Swift.Bool isEnabled;
    Swift.Double idleSeconds;
    Swift.Bool isApplicationActive;
    Swift.Bool isDebugForced;
    Any? idleTimerToken;
    __C.NSTimer? timer;
    Swift.Double lastInteraction;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)configureWithEnabled:(_Bool)enabled idleSeconds:(double)seconds;
- (void)setApplicationActive:(_Bool)active;
- (void)noteUserInteraction;
- (void)timerDidFire;

@end

#endif /* _TtC14T1TwitterSwift25T1PreventSleepCoordinator_h */
