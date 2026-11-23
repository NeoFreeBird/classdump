//
#ifndef TTMAssetVideoProperties_Protocol_h
#define TTMAssetVideoProperties_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class TFSAssetTAVTranscoderConfiguration;

@protocol TTMAssetVideoProperties <NSObject, NSCopying, NSCoding>

@required

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } assetDimensions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } outputDimensions;
@property (readonly, nonatomic) long long videoExportQuality;
@property (readonly, nonatomic) double maximumOutputBitrate;
@property (readonly, nonatomic) TFSAssetTAVTranscoderConfiguration *tavTranscoderConfiguration;

/* required instance methods */
- (void)updateVideoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate configuration:(id)configuration;

@optional

@end

#endif /* TTMAssetVideoProperties_Protocol_h */
