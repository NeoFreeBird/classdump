//
#ifndef TTMAssetImage_h
#define TTMAssetImage_h
@import Foundation;

#include "TTMAssetALAsset.h"
#include "TTMAssetFilterParameters.h"
#include "TTMAssetHashable-Protocol.h"
#include "TTMAssetRenderingResult.h"

@class NSData, UIImage;

@interface TTMAssetImage : TTMAssetALAsset <TTMAssetHashable>

@property (retain, nonatomic) NSData *sourceData;
@property (retain, nonatomic) UIImage *sourceImage;
@property (retain, nonatomic) UIImage *nonEditedPreview;
@property (nonatomic) struct CGSize { double x0; double x1; } sourceDimensions;
@property (retain, nonatomic) TTMAssetRenderingResult *lastRenderingResult;
@property (nonatomic) long long lastRenderedMaxDimension;
@property (nonatomic) _Bool prefersLosslessCompression;
@property (retain, nonatomic) TTMAssetFilterParameters *filterParameters;
@property (readonly, nonatomic) unsigned long long hashableSource;

/* class methods */
+ (id)compressImage:(id)image withRenderingOptions:(id)options prefersLosslessCompression:(_Bool)compression outError:(id *)error;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image localIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_generateNonEditedPreviewFromSourceImage:(id)image completion:(id /* block */)completion;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (void)_expireCacheAfterEdits;
- (id)mediaMetadata;
- (id)deprecatedPreview;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_generatePreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)saveFinalImageToFilePath:(id)path withRenderingOptions:(id)options completion:(id /* block */)completion;
- (void)_updateScribeValueWithRenderingResult:(id)result;
- (void)originalMediaDataWithCompletion:(id /* block */)completion;
- (void)fullResolutionImageWithCompletion:(id /* block */)completion;
- (void)originalMediaDataIncludingSourceImageWithCompletion:(id /* block */)completion;
- (void)_convertSourceImageToPNGDataWithCompletion:(id /* block */)completion;
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;
- (void)_loadAndTransformSourceWithRenderingOptions:(id)options maxDimension:(long long)dimension completion:(id /* block */)completion;
- (void)_transformImage:(id)image maxDimension:(long long)dimension completion:(id /* block */)completion;
- (void)_loadGrokImagineOriginalDataWithMaxDimension:(long long)dimension maxAllowedFileSize:(unsigned long long)size completion:(id /* block */)completion;
- (void)_metadataForAsset:(id)asset completion:(id /* block */)completion;
- (void)_transformAsset:(id)asset maxDimension:(long long)dimension progressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path withRenderingOptions:(id)options completion:(id /* block */)completion;
- (void)_didLoadBackupData:(id)data;
- (void)_requestImageForAsset:(id)asset maxDimension:(double)dimension completion:(id /* block */)completion;
- (_Bool)supportsAltText;

@end

#endif /* TTMAssetImage_h */
