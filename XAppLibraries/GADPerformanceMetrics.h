//
#ifndef GADPerformanceMetrics_h
#define GADPerformanceMetrics_h
@import Foundation;

#include "GADFramerateObserver-Protocol.h"
#include "GADMemoryUtilizationMonitor.h"
#include "GADNetworkUtilizationMonitor.h"
#include "GADScheduler.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADPerformanceMetrics : NSObject <GADFramerateObserver> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDate *_startTimestamp;
    NSMutableArray *_droppedFrameCounts;
    double _droppedFrameReportingInterval;
    GADMemoryUtilizationMonitor *_memoryMonitor;
    GADScheduler *_memoryUpdateScheduler;
    GADNetworkUtilizationMonitor *_networkMonitor;
    NSDictionary *_initialCPUTimeDictionary;
    NSDictionary *_incrementedCPUTimeDictionary;
}

@property (readonly, copy, nonatomic) NSArray *droppedFrameCountPerSample;
@property (readonly, nonatomic) unsigned long long initiallyAllocatedByteCount;
@property (readonly, nonatomic) unsigned long long peakAllocatedByteCount;
@property (readonly, nonatomic) unsigned long long finalAllocatedByteCount;
@property (readonly, nonatomic) long long cellularTransmittedByteCount;
@property (readonly, nonatomic) long long cellularReceivedByteCount;
@property (readonly, nonatomic) long long wifiTransmittedByteCount;
@property (readonly, nonatomic) long long wifiReceivedByteCount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) _Bool hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)recordDroppedFrames:(long long)frames forBucketIndex:(long long)index;
- (void)framerateMonitorDidDetectDroppedFrames:(long long)frames;

@end

#endif /* GADPerformanceMetrics_h */
