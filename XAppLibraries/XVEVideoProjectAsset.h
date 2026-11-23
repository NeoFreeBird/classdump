//
#ifndef XVEVideoProjectAsset_h
#define XVEVideoProjectAsset_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAssetCompositeVideo.h"
#include "TTMAssetDurationProviding-Protocol.h"
#include "TTMPersistentStringConvertible-Protocol.h"

@class NSString, UIImage;

@interface XVEVideoProjectAsset : TTMAssetCompositeVideo <TTMAssetDurationProviding> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 content;
    @40@0:8:16@24@32 clipSources;
    @40@0:8:16@24@32 seedObjectIdentifier;
    @40@0:8:16@24@32 _archivedVersion;
    @40@0:8:16@24@32 _archivedProject;
    @40@0:8:16@24@32 _cachedPreview;
    @40@0:8:16@24@32 _pendingPreviewCompletions;
    @40@0:8:16@24@32 _renderCoordinator;
}

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, readonly) NSString *uploadFlowLoggerComponentPrefix;
@property (nonatomic, readonly) unsigned long long attachmentType;
@property (nonatomic, readonly) id <NSCoding, NSCopying, TTMPersistentStringConvertible> objectIdentifier;
@property (nonatomic, readonly) _Bool keepsDraftOnDevice;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } assetDimensions;
@property (nonatomic, readonly) UIImage *deprecatedPreview;
@property (nonatomic, readonly) double duration;

/* class methods */
+ (id)classFallbacksForKeyedArchiver;

/* instance methods */
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)_clipSourceAISignatureDetectionDidComplete:(id)complete;
- (id)localBackupAssets;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)cancelUpload;
- (void)mediaAssetUpload:(id)upload didFinishSuccessfully:(_Bool)successfully error:(id)error;
- (void)videoExportPropertiesDidChange;

@end

#endif /* XVEVideoProjectAsset_h */
