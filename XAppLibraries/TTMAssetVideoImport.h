//
#ifndef TTMAssetVideoImport_h
#define TTMAssetVideoImport_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TTMAssetALAsset.h"
#include "TTMAssetHashable-Protocol.h"
#include "TTMAssetImage.h"
#include "TTMAssetVideoProperties-Protocol.h"
#include "TTMAssetVideoTrimParameters.h"
#include "TTMAssetVideoTrimmable-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, TFSAssetExportSession, TFSAssetTAVTranscoderConfiguration, TFSReferencedFile;

@interface TTMAssetVideoImport : TTMAssetALAsset <TTMAssetHashable, TTMAssetVideoTrimmable, TTMAssetVideoProperties> {
    /* instance variables */
    NSNumber *_transmuxMaxFileSizeEnabled;
    id /* block */ _transmuxMaxFileSizeEnabledCheck;
}

@property (readonly, nonatomic) NSString *exportedVideoFilename;
@property (readonly, nonatomic) NSURL *exportedVideoURL;
@property (retain, nonatomic) TFSAssetExportSession *exportSession;
@property (retain, nonatomic) TFSReferencedFile *livePhotoPairedVideoReferencedFile;
@property (readonly, nonatomic) _Bool livePhotoPairedVideo;
@property (retain, nonatomic) TTMAssetVideoTrimParameters *trimParameters;
@property (retain, nonatomic) TTMAssetImage *userSpecifiedPreviewImage;
@property (readonly, nonatomic) double ingestDuration;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) _Bool stripAudioTrack;
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
- (id)initWithPhotoAsset:(id)asset stripAudioTrack:(_Bool)track videoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate tavTranscoderEnabled:(_Bool)enabled passthroughOnTransmuxEnabled:(_Bool)enabled availableFileTransmuxEnabled:(id /* block */)enabled hevcTransmuxEnabled:(id /* block */)enabled transmuxMaxFileSize:(id)size transmuxMaxFileSizeEnabledCheck:(id /* block */)check tavTranscoderConfiguration:(id)configuration;
- (id)initWithPhotoAsset:(id)asset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_initExportedVideoFilename:(id)filename;
- (id)_exportSessionWithAVAsset:(id)avasset options:(id)options;
- (long long)mediaType;
- (unsigned long long)attachmentType;
- (void)cancelUpload;
- (void)saveCompressedVideoToDirectory:(id)directory withRenderingOptions:(id)options completion:(id /* block */)completion;
- (void)saveCompressedVideoToDirectory__DEPRECATED:(id)deprecated withRenderingOptions:(id)options completion:(id /* block */)completion;
- (void)_expireCacheAfterEdits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)_generatePreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)_updateDurationFromAVAsset:(id)avasset;
- (void)_deleteExportedVideo;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)saveLocalBackupToDocumentsDirectory:(id)directory completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path isCompressed:(_Bool)compressed completion:(id /* block */)completion;
- (void)_saveAsset:(id)asset toFilePath:(id)path isCompressed:(_Bool)compressed completion:(id /* block */)completion;
- (void)_exportAvAssetWithOptions:(id)options completion:(id /* block */)completion;
- (void)_logImportSuccessAndExportAVAsset:(id)avasset renderingOptions:(id)options progressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_exportAVAsset:(id)avasset renderingOptions:(id)options progressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_updateScribeValueWithRenderingResult:(id)result;
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;
- (void)_writeToLibrary:(id /* block */)library;
- (void)avAssetWithProgressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)updateVideoExportQuality:(long long)quality maximumOutputBitrate:(double)bitrate configuration:(id)configuration;
- (void)originalMediaURLWithCompletion:(id /* block */)completion;
- (void)_loadLivePhotoPairedVideoWithAsset:(id)asset withCompletion:(id /* block */)completion;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isLivePhotoPairedVideo;

@end

#endif /* TTMAssetVideoImport_h */
