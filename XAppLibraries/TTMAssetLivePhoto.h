//
#ifndef TTMAssetLivePhoto_h
#define TTMAssetLivePhoto_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAssetALAsset.h"
#include "TTMAssetVideoTrimParameters.h"

@class NSObject, NSString;

@interface TTMAssetLivePhoto : TTMAssetALAsset

@property (retain, nonatomic) TTMAssetALAsset *currentMediaAsset;
@property (copy, nonatomic) NSString *imageAltText;
@property (retain, nonatomic) NSObject<NSCoding, NSCopying> *imageEditParameters;
@property (retain, nonatomic) TTMAssetVideoTrimParameters *videoTrimParameters;
@property (nonatomic) unsigned long long animatedState;

/* class methods */
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithPhotoAsset:(id)asset;
- (id)initWithMediaAsset:(id)asset originalLivePhotoMediaAsset:(id)asset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_ttm_main_updateCurrentMediaAssetWithAsset:(id)asset animatedState:(unsigned long long)state;
- (id)currentAsset;
- (long long)mediaType;
- (unsigned long long)attachmentType;
- (id)editParameters;
- (void)setEditParameters:(id)parameters;
- (id)scribeValue;
- (void)setScribeValue:(id)value;
- (id)uniqueID;
- (id)objectIdentifier;
- (id)deprecatedPreview;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options;
- (void)mediaSizeWithCompletion:(id /* block */)completion;
- (id)mediaIdExpiry;
- (id)sourceURLString;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (id)accessibilityText;
- (_Bool)isVideoImport;
- (id)videoImportMediaAsset;
- (id)localIdentifier;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)type;
- (_Bool)assetSavedToLibrary;
- (void)setAssetSavedToLibrary:(_Bool)library;
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;
- (void)saveLocalBackupToDocumentsDirectory:(id)directory completion:(id /* block */)completion;
- (id)uploadMediaAsset;
- (unsigned long long)mediaUploadTLLType;
- (id)uploader;
- (_Bool)pendingUploadSuccess;
- (id)mediaMetadata;
- (_Bool)needsUpload;
- (void)cancelUpload;
- (id)mediaId;
- (_Bool)beingUploadedFromAccountID:(id)id;
- (_Bool)uploadedFromAccountOD:(id)od;
- (void)mediaAssetUpload:(id)upload didStartWithAccountID:(id)id;
- (void)mediaAssetUpload:(id)upload didFinishSuccessfully:(_Bool)successfully error:(id)error;
- (void)mediaAssetUpload:(id)upload didUpdateProgress:(float)progress;
- (void)mediaAssetUpload:(id)upload didUpdateMediaInformation:(id)information expiryDate:(id)date;
- (_Bool)supportsAltText;
- (id)altText;
- (void)setAltText:(id)text;

@end

#endif /* TTMAssetLivePhoto_h */
