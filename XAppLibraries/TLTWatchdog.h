//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTWatchdog_h
#define TLTWatchdog_h
@import Foundation;

#include "TLTWatchdogDelegate-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TLTWatchdog : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) double hangInterval;
@property (nonatomic) double watchdogInterval;
@property (nonatomic) double reschedulingDelay;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *stopOrRescheduleRequested;
@property (weak, nonatomic) id <TLTWatchdogDelegate> delegate;

/* instance methods */
- (id)initWithTimeIntervalSinceStart:(double)start hangInterval:(double)interval watchdogInterval:(double)interval mainThreadReschedulingDelay:(double)delay delegate:(id)delegate;
- (void)start;
- (void)stop;
- (void)_reschedule;
- (void)_startWaitingForHangAndWatchdogWithStartTime:(unsigned long long)time;
- (_Bool)_didTimeoutWaitingUntilTime:(unsigned long long)time;

@end

#endif /* TLTWatchdog_h */
