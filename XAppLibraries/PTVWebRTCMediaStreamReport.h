//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWebRTCMediaStreamReport_h
#define PTVWebRTCMediaStreamReport_h
@import Foundation;

@class NSNumber, NSObject, NSString, RTCLegacyStatsReport;

@interface PTVWebRTCMediaStreamReport : NSObject

@property (readonly, nonatomic) RTCLegacyStatsReport *statsReport;
@property (readonly, nonatomic) NSNumber *plisReceived;
@property (readonly, nonatomic) NSNumber *nacksReceived;
@property (readonly, nonatomic) NSNumber *firsReceived;
@property (readonly, nonatomic) NSNumber *frameWidthSent;
@property (readonly, nonatomic) NSNumber *frameHeightSent;
@property (readonly, nonatomic) NSNumber *frameRateSent;
@property (readonly, nonatomic) NSNumber *qpSum;
@property (readonly, nonatomic) _Bool isBandwidthLimitedResolution;
@property (readonly, nonatomic) _Bool isCPULimitedResolution;
@property (readonly, nonatomic) NSNumber *plisSent;
@property (readonly, nonatomic) NSNumber *nacksSent;
@property (readonly, nonatomic) NSNumber *firsSent;
@property (readonly, nonatomic) NSNumber *frameWidthReceived;
@property (readonly, nonatomic) NSNumber *frameHeightReceived;
@property (readonly, nonatomic) NSNumber *frameRateReceived;
@property (readonly, nonatomic) NSNumber *jitterBufferDelayMillis;
@property (readonly, nonatomic) NSNumber *packetsLostCount;
@property (readonly, nonatomic) NSNumber *framesDecodedCount;
@property (readonly, nonatomic) NSNumber *interframeDelayMaxMillis;
@property (readonly, nonatomic) NSString *transportId;
@property (readonly, nonatomic) NSNumber *currentRoundTripTimeMillis;

/* instance methods */
- (id)initWithStatsReport:(id)report;

@end

#endif /* PTVWebRTCMediaStreamReport_h */
