//
#ifndef FIRInstallationsBackoffEventData_h
#define FIRInstallationsBackoffEventData_h
@import Foundation;

@class NSDate, NSObject;

@interface FIRInstallationsBackoffEventData : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSDate *lastEventDate;
@property (readonly, nonatomic) long long eventCount;
@property (readonly, nonatomic) double backoffTimeInterval;

/* class methods */
+ (double)backoffTimeIntervalWithEvent:(long long)event eventCount:(long long)count;
+ (double)recoverableErrorBackoffTimeForAttemptNumber:(long long)number;
+ (double)randomMilliseconds;

/* instance methods */
- (id)initWithEvent:(long long)event lastEventDate:(id)date eventCount:(long long)count;

@end

#endif /* FIRInstallationsBackoffEventData_h */
