//
#ifndef TTMAssetPHLivePhoto_h
#define TTMAssetPHLivePhoto_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetALAsset.h"
#include "TTMAssetAnimatedImage.h"
#include "TTMAssetImage.h"

@class NSObject, NSString, TFSReferencedFile;

@interface TTMAssetPHLivePhoto : TTMAsset

@property (retain, nonatomic) TTMAssetALAsset *currentMediaAsset;
@property (copy, nonatomic) NSString *imageAltText;
@property (retain, nonatomic) NSObject<NSCoding, NSCopying> *imageEditParameters;
@property (retain, nonatomic) TFSReferencedFile *referencedLocalBackupFile;
@property (nonatomic) unsigned long long animatedState;
@property (readonly, nonatomic) TTMAsset *currentAsset;
@property (readonly, nonatomic) TTMAssetImage *stillImage;
@property (readonly, nonatomic) TTMAssetAnimatedImage *animatedImage;
@property (readonly, nonatomic) NSString *localIdentifier;

/* class methods */
+ (void)extractImageAndVideoFromLivePhoto:(id)photo localIdentifier:(id)identifier completion:(id /* block */)completion;

/* instance methods */
- (id)init;
- (id)initWithStillImage:(id)image animatedImage:(id)image;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
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
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)mediaSizeWithCompletion:(id /* block */)completion;
- (id)mediaIdExpiry;
- (id)sourceURLString;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (id)accessibilityText;
- (_Bool)isVideoImport;
- (id)videoImportMediaAsset;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)type;
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

#endif /* TTMAssetPHLivePhoto_h */
