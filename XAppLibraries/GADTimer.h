//
#ifndef GADTimer_h
#define GADTimer_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADTimer : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    id /* block */ _handler;
    long long _expirationIdentifier;
    double _resumeTimestamp;
    double _timeInterval;
    double _remainingTimeInterval;
    _Bool _isStarted;
    _Bool _isPaused;
}

/* instance methods */
- (id)initWithTimeInterval:(double)interval handler:(id /* block */)handler;
- (void)start;
- (void)startInternal;
- (void)resume;
- (void)resumeInternal;
- (void)pause;
- (void)pauseInternal;
- (void)expiredWithExpirationIdentifier:(long long)identifier;
- (void)forceExpire;

@end

#endif /* GADTimer_h */
