//
#ifndef TTMAssetPHPickerVideo_h
#define TTMAssetPHPickerVideo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetHashable-Protocol.h"
#include "TTMAssetImage.h"
#include "TTMAssetVideoProperties-Protocol.h"
#include "TTMAssetVideoTrimParameters.h"
#include "TTMAssetVideoTrimmable-Protocol.h"

@class AVAsset, NSArray, NSError, NSNumber, NSString, NSURL, TFSAssetExportSession, TFSAssetTAVTranscoderConfiguration, TFSReferencedFile, UIImage;

@interface TTMAssetPHPickerVideo : TTMAsset <TTMAssetHashable, TTMAssetVideoTrimmable, TTMAssetVideoProperties> {
    /* instance variables */
    TFSReferencedFile *_videoFileReference;
    int _exportID;
    _Bool _renderingPreview;
    _Bool _exportingVideo;
    _Bool _retriedExportAfterMediaServicesReset;
    _Bool _mediaServicesWereResetDuringExport;
    unsigned long long _exportGeneration;
    _Bool _usedDirectFileExport;
    NSArray *_renderPreviewCallbacks;
    TFSAssetExportSession *_exportSession;
    NSArray *_exportVideoCallbacks;
    NSArray *_exportVideoProgressCallbacks;
    AVAsset *_cachedAsset;
    struct CGSize { double width; double height; } _cachedAssetDimensions;
    double _cachedAssetDuration;
    UIImage *_cachedAssetPreviewImage;
    NSError *_exportError;
    NSNumber *_transmuxMaxFileSizeEnabled;
    id /* block */ _transmuxMaxFileSizeEnabledCheck;
}

@property (readonly, nonatomic) NSString *exportedVideoFilename;
@property (readonly, nonatomic) NSURL *exportedVideoURL;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) TTMAssetVideoTrimParameters *trimParameters;
@property (retain, nonatomic) TTMAssetImage *userSpecifiedPreviewImage;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *exportedFilePath;
@property (readonly, nonatomic) double duration;
@property (nonatomic) _Bool stripAudioTrack;
@property (nonatomic) _Bool exportSessionUsePassthroughEncoding;
@property (readonly, nonatomic) long long videoExportQuality;
@property (readonly, nonatomic) double maximumOutputBitrate;
@property (readonly, nonatomic) _Bool tavTranscoderEnabled;
@property (readonly, nonatomic) _Bool passthroughOnTransmuxEnabled;
@property (readonly, copy, nonatomic) id /* block */ availableFileTransmuxEnabled;
@property (readonly, copy, nonatomic) id /* block */ hevcTransmuxEnabled;
@property (readonly, nonatomic) NSNumber *transmuxMaxFileSize;
@property (readonly, nonatomic) TFSAssetTAVTranscoderConfiguration *tavTranscoderConfiguration;
@property (nonatomic) _Bool shouldPreferDecodableAudioTrack;
@property (readonly, nonatomic) unsigned long long hashableSource;
@property (copy, nonatomic) NSArray *sensitiveWarnings;
@property (nonatomic) _Bool allowDownload;
@property (retain, nonatomic) id <TAVTVideoFilterMediaMetadata, NSSecureCoding, NSCopying> customFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } assetDimensions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } outputDimensions;

/* instance methods */
- (id)initWithFile:(id)file assetDimensions:(struct CGSize { double x0; double x1; })dimensions stripAudioTrack:(_Bool)track videoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate tavTranscoderEnabled:(_Bool)enabled passthroughOnTransmuxEnabled:(_Bool)enabled availableFileTransmuxEnabled:(id /* block */)enabled hevcTransmuxEnabled:(id /* block */)enabled transmuxMaxFileSize:(id)size transmuxMaxFileSizeEnabledCheck:(id /* block */)check tavTranscoderConfiguration:(id)configuration localIdentifier:(id)identifier;
- (id)initWithTemporaryFile:(id)file assetDimensions:(struct CGSize { double x0; double x1; })dimensions localIdentifier:(id)identifier;
- (id)initWithTemporaryFile:(id)file assetDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithTemporaryFile:(id)file;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)saveLocalBackupToDocumentsDirectory:(id)directory completion:(id /* block */)completion;
- (void)cancelUpload;
- (void)saveCompressedVideoToDirectory:(id)directory withRenderingOptions:(id)options completion:(id /* block */)completion;
- (void)updateVideoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate configuration:(id)configuration;
- (id)objectIdentifier;
- (id)deprecatedPreview;
- (id)uploadFlowLoggerComponentPrefix;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)originalMediaURLWithCompletion:(id /* block */)completion;
- (void)avAssetWithProgressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_ttm_generateAVAssetWithOptions:(id)options complete:(id /* block */)complete;
- (void)_ttm_generateAVAssetWithOptions:(id)options allowsFailedSource:(_Bool)source complete:(id /* block */)complete;
- (void)_ttm_clearCachedAssets;
- (void)_ttm_completePreviewLoad;
- (void)_ttm_completeExport;
- (void)_ttm_updateExportProgress:(float)progress;
- (id)_exportSessionWithAVAsset:(id)avasset options:(id)options;
- (void)_ttm_exportWithOptions:(id)options completion:(id /* block */)completion;
- (void)_ttm_completeExportWithUnusableSource:(id)source;
- (void)_ttm_exportAVAsset:(id)avasset renderingOptions:(id)options;
- (void)_ttm_observeMediaServicesReset;
- (void)_ttm_mediaServicesWereReset:(id)reset;
- (void)_initExportedVideoFilename:(id)filename;

@end

#endif /* TTMAssetPHPickerVideo_h */
