//
#ifndef T1BandwidthAggregatorDelegate_Protocol_h
#define T1BandwidthAggregatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BandwidthAggregatorDelegate <NSObject>

@required

/* required instance methods */
- (void)bandwidthAggregator:(id)aggregator didUpdateQualityFrom:(long long)from to:(long long)to;

@optional

@end

#endif /* T1BandwidthAggregatorDelegate_Protocol_h */
