//
#ifndef LHLSFeatures_Protocol_h
#define LHLSFeatures_Protocol_h
@import Foundation;

@protocol LHLSFeatures

@required

@property (readonly, nonatomic) _Bool newPolicy;
@property (readonly, nonatomic) double bufferResilience;
@property (readonly, nonatomic) double bufferSizeMin;
@property (readonly, nonatomic) double bufferStallPower;
@property (readonly, nonatomic) double bufferStallMultiplier;
@property (readonly, nonatomic) double defaultCDNLatency;
@property (readonly, nonatomic) double defaultDownloadRatio;
@property (readonly, nonatomic) double defaultNetworkLatency;
@property (readonly, nonatomic) double defaultUplinkTotal;
@property (readonly, nonatomic) double playthroughTarget;
@property (readonly, nonatomic) double userWaitingLatencyOverride;

@optional

@end

#endif /* LHLSFeatures_Protocol_h */
