//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWebRTCVideoBandwidthEstimateReport_h
#define PTVWebRTCVideoBandwidthEstimateReport_h
@import Foundation;

@class NSNumber, NSObject, RTCLegacyStatsReport;

@interface PTVWebRTCVideoBandwidthEstimateReport : NSObject

@property (readonly, nonatomic) RTCLegacyStatsReport *statsReport;
@property (readonly, nonatomic) NSNumber *availableReceiveBandwidth;
@property (readonly, nonatomic) NSNumber *availableSendBandwidth;
@property (readonly, nonatomic) NSNumber *retransmissionsSent;
@property (readonly, nonatomic) NSNumber *targetEncodeBitrate;

/* instance methods */
- (id)initWithStatsReport:(id)report;

@end

#endif /* PTVWebRTCVideoBandwidthEstimateReport_h */
