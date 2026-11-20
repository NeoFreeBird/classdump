//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef RTCLegacyStatsReport_PTVAdditions_h
#define RTCLegacyStatsReport_PTVAdditions_h
@import Foundation;

@interface RTCLegacyStatsReport (PTVAdditions)

/* instance methods */
- (_Bool)isVideoStreamReport;
- (_Bool)isAudioStreamReport;
- (_Bool)isVideoBandwidthEstimateReport;
- (id)stringValueForKey:(id)key;
- (id)integerValueForKey:(id)key;
- (id)doubleValueForKey:(id)key;
- (_Bool)boolValueForKey:(id)key;

@end

#endif /* RTCLegacyStatsReport_PTVAdditions_h */
