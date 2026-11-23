//
#ifndef PTVWebRTCCandidatePairReport_h
#define PTVWebRTCCandidatePairReport_h
@import Foundation;

@class NSNumber, NSObject, NSString, RTCLegacyStatsReport;

@interface PTVWebRTCCandidatePairReport : NSObject

@property (readonly, nonatomic) RTCLegacyStatsReport *statsReport;
@property (readonly, nonatomic) NSNumber *bytesSent;
@property (readonly, nonatomic) NSNumber *bytesReceived;
@property (readonly, nonatomic) NSNumber *currentRoundTripTimeMillis;
@property (readonly, nonatomic) NSString *localCandidateId;

/* instance methods */
- (id)initWithStatsReport:(id)report;

@end

#endif /* PTVWebRTCCandidatePairReport_h */
