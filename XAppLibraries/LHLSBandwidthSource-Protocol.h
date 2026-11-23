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
