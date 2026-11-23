//
#ifndef TVDIHeartbeatMetrics_h
#define TVDIHeartbeatMetrics_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TVDIBitrateMetrics.h"
#include "TVDILatencyMetrics.h"

@class NSNumber, NSObject;

@interface TVDIHeartbeatMetrics : NSObject <NSCopying, NSCoding>

@property (readonly, nonatomic) TVDIBitrateMetrics *bitrateMetrics;
@property (readonly, nonatomic) TVDILatencyMetrics *latencyMetrics;
@property (readonly, nonatomic) NSNumber *bandwidthEstimate;
@property (readonly, nonatomic) long long broadcastState;
@property (readonly, nonatomic) int stallCount;

/* instance methods */
- (id)initWithBitrateMetrics:(id)metrics latencyMetrics:(id)metrics bandwidthEstimate:(id)estimate broadcastState:(long long)state stallCount:(int)count;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TVDIHeartbeatMetrics_h */
