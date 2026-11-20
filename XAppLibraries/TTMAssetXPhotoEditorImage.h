//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetXPhotoEditorImage_h
#define TTMAssetXPhotoEditorImage_h
@import Foundation;

#include "TTMAssetImage.h"

@class XPhotoEditorEditorResult;

@interface TTMAssetXPhotoEditorImage : TTMAssetImage

@property (readonly, nonatomic) XPhotoEditorEditorResult *editorResult;

/* instance methods */
- (id)initWithEditorResult:(id)result replacingAsset:(id)asset;
- (id)initWithEditorResult:(id)result;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_generatePreviewWithOptions:(id)options completion:(id /* block */)completion;
- (id)altText;
- (void)setAltText:(id)text;
- (id)sensitiveWarnings;
- (void)setSensitiveWarnings:(id)warnings;
- (_Bool)allowDownload;
- (void)setAllowDownload:(_Bool)download;
- (_Bool)blockGrokModifications;
- (void)setBlockGrokModifications:(_Bool)modifications;
- (_Bool)showsSensitiveWarnings;
- (id)deprecatedPreview;

@end

#endif /* TTMAssetXPhotoEditorImage_h */
