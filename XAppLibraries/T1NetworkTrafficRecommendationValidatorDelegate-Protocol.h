//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NetworkTrafficRecommendationValidatorDelegate_Protocol_h
#define T1NetworkTrafficRecommendationValidatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NetworkTrafficRecommendationValidatorDelegate <NSObject>

@required

/* required instance methods */
- (void)validator:(id)validator didValidateTrafficMap:(id)map withRecommendationEmpty:(_Bool)empty;
- (void)validator:(id)validator didCaptureProbeMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)validator:(id)validator didReportPredictionValidationEvent:(long long)event;
- (double)validator:(id)validator normalizedRequestDuration:(id)duration;

@optional

@end

#endif /* T1NetworkTrafficRecommendationValidatorDelegate_Protocol_h */
