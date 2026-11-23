//
#ifndef TTMAssetCompositeVideo_h
#define TTMAssetCompositeVideo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetImage.h"
#include "TTMAssetVideoProperties-Protocol.h"
#include "TTMAssetVideoTrimParameters.h"
#include "TTMAssetVideoTrimmable-Protocol.h"

@class NSArray, NSString, TFSAssetTAVTranscoderConfiguration;

@interface TTMAssetCompositeVideo : TTMAsset <TTMAssetVideoTrimmable, TTMAssetVideoProperties>

@property (retain, nonatomic) TTMAssetImage *userSpecifiedPreviewImage;
@property (readonly, nonatomic) long long videoExportQuality;
@property (readonly, nonatomic) double maximumOutputBitrate;
@property (readonly, nonatomic) TFSAssetTAVTranscoderConfiguration *tavTranscoderConfiguration;
@property (retain, nonatomic) TTMAssetVideoTrimParameters *trimParameters;
@property (copy, nonatomic) NSArray *sensitiveWarnings;
@property (nonatomic) _Bool allowDownload;
@property (retain, nonatomic) id <TAVTVideoFilterMediaMetadata, NSSecureCoding, NSCopying> customFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } assetDimensions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } outputDimensions;

/* class methods */
+ (id)makeVideoFilterExecutionGate;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)adoptVideoPropertiesFromAsset:(id)asset;
- (id)customFilterVideoOutputSettings;
- (id)customFilterAudioOutputSettings;
- (struct CGSize { double x0; double x1; })customFilterMaximumDimensionsForCanvasSize:(struct CGSize { double x0; double x1; })size;
- (void)videoExportPropertiesDidChange;
- (id)localBackupAssets;
- (void)saveLocalBackupsToDocumentsDirectory:(id)directory eachBackupCompletion:(id /* block */)completion;
- (void)avAssetWithProgressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (id)copy;
- (void)updateVideoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate configuration:(id)configuration;

@end

#endif /* TTMAssetCompositeVideo_h */
