//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
