//
#ifndef TTMAssetALAsset_h
#define TTMAssetALAsset_h
@import Foundation;

#include "TTMAsset.h"
#include "TTMAssetSaveToLibrary-Protocol.h"

@class NSString, NSUUID, PHAsset, TFSReferencedFile, TFSTwitterLocation;

@interface TTMAssetALAsset : TTMAsset <TTMAssetSaveToLibrary> {
    /* instance variables */
    struct CGSize { double width; double height; } _assetDimensions;
    NSUUID *_previewCacheKey;
}

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) TFSTwitterLocation *location;
@property (nonatomic) _Bool needsRequestAsset;
@property (nonatomic) long long localBackupState;
@property (retain, nonatomic) TFSReferencedFile *referencedLocalBackupFile;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (nonatomic) _Bool assetSavedToLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_previewRenderingQueue;
+ (id)_localBackupQueue;
+ (id)objectIdentifierForPhotoAsset:(id)asset;
+ (struct CGSize { double x0; double x1; })_previewTargetSize;
+ (id)_ttm_previewCache;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)initWithPhotoAsset:(id)asset;
- (void)_updateScribeValueWithPhotoAsset:(id)asset;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (id)objectIdentifier;
- (void)mediaSizeWithCompletion:(id /* block */)completion;
- (id)_ttm_localBackupFilePath;
- (void)saveLocalBackupToDocumentsDirectory:(id)directory completion:(id /* block */)completion;
- (void)saveToDirectory:(id)directory completion:(id /* block */)completion;
- (id)_referencedFileWithDirectory:(id)directory filename:(id)filename;
- (void)_saveLocalBackupToFilePath:(id)path completion:(id /* block */)completion;
- (void)_saveAsset:(id)asset localFilePath:(id)path completion:(id /* block */)completion;
- (_Bool)_bufferedCopyFromImageData:(id)data toPath:(id)path;
- (unsigned long long)_readData:(id)data bytes:(void *)bytes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_loadLocalBackupData:(id /* block */)data;
- (void)_didLoadBackupData:(id)data;
- (void)_setLocalIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deprecatedPreview;
- (void)_expireCacheAfterEdits;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)_generatePreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)_dispatchWithPhotoAsset:(id /* block */)asset;
- (void)_dispatchWithPhotoAsset:(id /* block */)asset withFallBackToLocalBackup:(id /* block */)backup;
- (void)_dispatchWithPhotoAsset:(id /* block */)asset withFallBackToLocalBackupFileURL:(id /* block */)url;
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;
- (id)_ttm_previewCacheKey;
- (id)cachedPreview;
- (void)setCachedPreview:(id)preview;

@end

#endif /* TTMAssetALAsset_h */
