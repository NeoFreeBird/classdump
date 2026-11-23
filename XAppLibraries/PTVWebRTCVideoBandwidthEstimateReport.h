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
