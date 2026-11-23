//
#ifndef TDTBatteryPerformanceTest_h
#define TDTBatteryPerformanceTest_h
@import Foundation;

#include "TDTBatterySampler.h"
#include "TDTPerformanceTest.h"

@class NSString;

@interface TDTBatteryPerformanceTest : TDTPerformanceTest {
    /* instance variables */
    TDTBatterySampler *_batterySampler;
    NSString *_runId;
    _Bool _isSubsequentRun;
}

@property (readonly, nonatomic) double batteryDeltaThreshold;
@property (readonly, nonatomic) double batterySamplingInterval;

/* instance methods */
- (id)init;
- (id)initWithParameters:(id)parameters;
- (void)dealloc;
- (_Bool)_batteryDeltaAboveThreshold;
- (void)_batterySampleAdded;
- (void)_finishedSampling;
- (id)_runFilePath;
- (void)_saveBatteryMonitorState;
- (double)_totalSamplingTime;
- (void)start;
- (void)stop;
- (void)restartWithParameters:(id)parameters;
- (void)takeSample;

@end

#endif /* TDTBatteryPerformanceTest_h */
