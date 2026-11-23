//
#ifndef T1NetworkTrafficMappingServiceDelegate_Protocol_h
#define T1NetworkTrafficMappingServiceDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NetworkTrafficMappingServiceDelegate <NSObject>

@required

/* required instance methods */
- (void)trafficMappingServiceDidApplyTrafficMap:(id)map;
- (void)trafficMappingServiceDidClearTrafficMap:(id)map;
- (void)trafficMappingServiceDidPurgeTrafficMap:(id)map;
- (void)trafficMappingServiceDidDiscardTrafficMap:(id)map;
- (void)trafficMappingServiceDidEncounterInvalidTrafficMap:(id)map;
- (void)trafficMappingService:(id)service didCaptureProbeMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)trafficMappingServiceDidThrottleProbe;
- (void)trafficMappingServiceDidEncounterCorrectPrediction:(id)prediction;
- (void)trafficMappingServiceDidEncounterIncorrectPrediction:(id)prediction;
- (void)trafficMappingServiceDidEncounterPredictionMeasurementFailed:(id)failed;
- (double)trafficMappingService:(id)service normalizedRequestDuration:(id)duration;

@optional

@end

#endif /* T1NetworkTrafficMappingServiceDelegate_Protocol_h */
