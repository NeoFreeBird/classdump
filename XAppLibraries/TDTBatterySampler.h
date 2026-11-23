//
#ifndef TDTBatterySampler_h
#define TDTBatterySampler_h
@import Foundation;

#include "TDTBatteryMonitorHandle.h"
#include "TDTSampler.h"
#include "TFNBatterySample.h"

@class UIDevice;

@interface TDTBatterySampler : TDTSampler {
    /* instance variables */
    UIDevice *_device;
}

@property (retain, nonatomic) TDTBatteryMonitorHandle *batteryMonitorHandle;
@property (readonly, nonatomic) TFNBatterySample *firstSample;
@property (readonly, nonatomic) TFNBatterySample *lastSample;
@property (readonly, nonatomic) double averageDrainRate;

/* instance methods */
- (id)init;
- (void)willStart;
- (void)didStop;
- (id)sample;
- (id)_sampleFromDevice;

@end

#endif /* TDTBatterySampler_h */
