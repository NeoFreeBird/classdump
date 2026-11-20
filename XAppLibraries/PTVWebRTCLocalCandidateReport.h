//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWebRTCLocalCandidateReport_h
#define PTVWebRTCLocalCandidateReport_h
@import Foundation;

@class NSObject, NSString, RTCLegacyStatsReport;

@interface PTVWebRTCLocalCandidateReport : NSObject

@property (readonly, nonatomic) RTCLegacyStatsReport *statsReport;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) NSString *transportProtocol;

/* instance methods */
- (id)initWithStatsReport:(id)report;

@end

#endif /* PTVWebRTCLocalCandidateReport_h */
