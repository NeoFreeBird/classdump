//
#ifndef APMAdExposureReporter_h
#define APMAdExposureReporter_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface APMAdExposureReporter : NSObject {
    /* instance variables */
    NSMutableDictionary *_adUnitCounts;
    NSMutableDictionary *_adUnitStartTimes;
    double _adExposureStartTime;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) _Bool reportingEnabled;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)beginAdUnitExposure:(id)exposure;
- (void)endAdUnitExposure:(id)exposure;
- (double)currentTime;
- (void)updateStartTimesOnSerialQueue:(double)queue;
- (void)logExposureEventsWithScreenParameters:(id)parameters;
- (void)logExposureEventsOnSerialQueueWithEndTime:(double)time screenParameters:(id)parameters;
- (void)logAdExposureEventOnSerialQueueWithEndTime:(double)time screenParameters:(id)parameters;
- (void)logAdUnitExposureEventOnSerialQueueWithID:(id)id endTime:(double)time screenParameters:(id)parameters;
- (void)handleScreenDidChangeFromScreen:(id)screen toScreen:(id)screen;
- (void)handleEngagementTimer:(id)timer;
- (void)handleAppDidBecomeActive;
- (void)handleAppWillResignActiveWithScreen:(id)screen;
- (_Bool)isReportingEnabled;

@end

#endif /* APMAdExposureReporter_h */
