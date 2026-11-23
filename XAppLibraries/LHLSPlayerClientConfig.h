//
#ifndef LHLSPlayerClientConfig_h
#define LHLSPlayerClientConfig_h
@import Foundation;

@class NSObject;

@interface LHLSPlayerClientConfig : NSObject

@property (readonly, nonatomic) _Bool isLive;
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

/* instance methods */
- (id)initWithIsLive:(_Bool)live;
- (id)initWithIsLive:(_Bool)live features:(id)features;

@end

#endif /* LHLSPlayerClientConfig_h */
