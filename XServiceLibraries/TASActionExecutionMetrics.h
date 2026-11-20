//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASActionExecutionMetrics_h
#define TASActionExecutionMetrics_h
@import Foundation;

@class NSDate, NSObject;

@interface TASActionExecutionMetrics : NSObject // (Swift)

@property (nonatomic, readonly) NSDate *submittedAt;
@property (nonatomic, readonly) NSDate *beganExecutingAt;
@property (nonatomic, readonly) NSDate *cancelledAt;
@property (nonatomic, readonly) NSDate *completedAt;
@property (nonatomic, readonly) double waitingForExecutionDuration;
@property (nonatomic, readonly) double executionDuration;
@property (nonatomic, readonly) double totalDuration;

/* instance methods */
- (id)initWithSubmittedAt:(id)at beganExecutingAt:(id)at cancelledAt:(id)at completedAt:(id)at;
- (id)init;

@end

#endif /* TASActionExecutionMetrics_h */
