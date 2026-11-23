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
