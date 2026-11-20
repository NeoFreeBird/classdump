//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSBandwidthSource_Protocol_h
#define LHLSBandwidthSource_Protocol_h
@import Foundation;

@protocol LHLSBandwidthSource

@required

@property (readonly, nonatomic) int bandwidthBytesPerSecond;

@optional

@end

#endif /* LHLSBandwidthSource_Protocol_h */
