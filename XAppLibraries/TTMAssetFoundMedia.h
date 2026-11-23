//
#ifndef TTMAssetFoundMedia_h
#define TTMAssetFoundMedia_h
@import Foundation;

#include "TTMAssetAnimatedImage.h"

@class NSString, TFSTwitterFoundMediaItem;

@interface TTMAssetFoundMedia : TTMAssetAnimatedImage

@property (readonly, nonatomic) TFSTwitterFoundMediaItem *foundMediaItem;
@property (readonly, copy, nonatomic) NSString *providerAltText;

/* instance methods */
- (id)initWithFoundMediaItem:(id)item;
- (unsigned long long)sourceType;
- (void)renderPreviewAnimatedGIFImageWithOptions:(id)options firstFrameCallback:(id /* block */)callback completion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (id)mediaMetadata;
- (id)sourceURLString;
- (void)_generatePreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path completion:(id /* block */)completion;
- (void)renderAnimatedGIFImageWithOptions:(id)options completion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)supportsAltText;

@end

#endif /* TTMAssetFoundMedia_h */
