//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSBandwidthSource_h
#define LHLSBandwidthSource_h
@import Foundation;

@class NSObject;

@interface LHLSBandwidthSource : NSObject

/* class methods */
+ (id)bandwidthSource;
+ (void)setBandwidthSource:(id)source;

@end

#endif /* LHLSBandwidthSource_h */
