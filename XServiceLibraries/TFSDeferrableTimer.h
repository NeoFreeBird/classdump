//
#ifndef TFSDeferrableTimer_h
#define TFSDeferrableTimer_h
@import Foundation;

#include "TFSTimer.h"

@class NSDate, NSObject, NSString;

@interface TFSDeferrableTimer : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) TFSTimer *currentTimer;
@property (nonatomic) double timeInterval;
@property (nonatomic) double maxDeferralTime;
@property (copy, nonatomic) NSString *mode;
@property (retain, nonatomic) NSDate *initialScheduleDate;
@property (nonatomic) _Bool repeats;
@property (readonly, nonatomic) _Bool maximumDeferralTimeExceeded;
@property (readonly, nonatomic) _Bool valid;

/* class methods */
+ (id)scheduledDeferrableTimerWithTimeInterval:(double)interval maxDeferralTime:(double)time forMode:(id)mode block:(id /* block */)block;

/* instance methods */
- (id)initWithTimeInterval:(double)interval maxDeferralTime:(double)time forMode:(id)mode block:(id /* block */)block;
- (_Bool)attemptDeferral;
- (void)invalidate;
- (_Bool)isValid;
- (void)_tfsu_scheduleTimer;

@end

#endif /* TFSDeferrableTimer_h */
