//
#ifndef _TtC4Grok27GrokImagineSharedVideoAsset_h
#define _TtC4Grok27GrokImagineSharedVideoAsset_h
@import Foundation;

#include "TTMAssetRemoteVideo.h"
#include "TTMAssetRenderingOptions.h"
#include "TTMAssetSaveToLibrary-Protocol.h"

@class Grok.GrokImagineSharedVideoAsset.Source, NSString, Swift.Bool, UIImage, _$sScT -> _$s10Foundation3URLVMn _$ss5ErrorMp ?, _$sScTySo23TTMAssetRenderingResultC _$ss5ErrorMp ?, _$sSo7UIImageCSg, __C.CGSize;

@interface Grok.GrokImagineSharedVideoAsset : TTMAssetRemoteVideo <TTMAssetSaveToLibrary> { // (Swift)
    /* instance variables */
    Grok.GrokImagineSharedVideoAsset.Source source;
    Swift.Task empty-list __C.TTMAssetRenderingResult protocol descriptor for Swift.Error ? finalDataTask;
    Swift.Task -> nominal type descriptor for Foundation.URL protocol descriptor for Swift.Error ? videoFileURLTask;
    __C.CGSize cachedDimensions;
    __C.UIImage? cachedPreviewImage;
}

@property (nonatomic, readonly) NSString *postID;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } assetDimensions;
@property (nonatomic, readonly) UIImage *deprecatedPreview;
@property (nonatomic) _Bool assetSavedToLibrary;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (unsigned long long)previewPlayerAutoPlayOptions;
- (void)renderPreviewWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (void)renderPreviewPlayerMediaWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (void)saveAssetToLibraryWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (id)initWithVideoURL:(id)url previewVideoURL:(id)url previewImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions;

@end

#endif /* _TtC4Grok27GrokImagineSharedVideoAsset_h */
