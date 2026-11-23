//
#ifndef T1LHLSBandwidthSource_h
#define T1LHLSBandwidthSource_h
@import Foundation;

#include "LHLSBandwidthSource-Protocol.h"

@class NSObject;

@interface T1LHLSBandwidthSource : NSObject <LHLSBandwidthSource>

@property (readonly, nonatomic) int bandwidthBytesPerSecond;

@end

#endif /* T1LHLSBandwidthSource_h */
