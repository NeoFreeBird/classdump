//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
