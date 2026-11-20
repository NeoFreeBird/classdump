//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCardViewLifecycleObserver_h
#define T1LiveEventCardViewLifecycleObserver_h
@import Foundation;

#include "TAVPlayback-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class NSObject, NSString, TFSTimer, TFSTwitterBroadcast;

@interface T1LiveEventCardViewLifecycleObserver : NSObject <TAVPlaybackObserver> {
    /* instance variables */
    double _viewThreshold;
    NSString *_component;
    NSString *_section;
    long long _lastTimeControlStatus;
    TFSTwitterBroadcast *_broadcast;
    unsigned long long _failedStartCount;
    double _nextStartAttemptTime;
}

@property (weak, nonatomic) id <TAVPlayback> observedPlayer;
@property (retain, nonatomic) TFSTimer *pendingFinishTimer;
@property (nonatomic) _Bool continuesLifecycleInFullscreen;

/* instance methods */
- (id)init;
- (id)initWithViewThreshold:(double)threshold broadcast:(id)broadcast component:(id)component;
- (id)initWithViewThreshold:(double)threshold broadcast:(id)broadcast component:(id)component section:(id)section;
- (void)dealloc;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)_t1_startDidCompleteWithError:(id)error;
- (void)_t1_scheduleFinishForLifecycleController:(id)controller;
- (void)_t1_cancelPendingFinish;

@end

#endif /* T1LiveEventCardViewLifecycleObserver_h */
