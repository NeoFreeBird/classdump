//
#ifndef TFNTwitterUserDataSourceServiceCommandQueue_h
#define TFNTwitterUserDataSourceServiceCommandQueue_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface TFNTwitterUserDataSourceServiceCommandQueue : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSMutableArray *pendingWork;
@property (readonly, nonatomic) double lastStartedTime;
@property (readonly, nonatomic) _Bool scheduledNextProcessing;

/* instance methods */
- (id)init;
- (id)initWithInterval:(double)interval;
- (void)addWork:(id /* block */)work;
- (void)private_processWork;
- (void)private_scheduleNextProcessingWithRemainingInterval:(double)interval;

@end

#endif /* TFNTwitterUserDataSourceServiceCommandQueue_h */
