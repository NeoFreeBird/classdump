//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetRemoteVideo_h
#define TTMAssetRemoteVideo_h
@import Foundation;

#include "TIPImageFetchDelegate-Protocol.h"
#include "TTMAsset.h"

@class NSMutableArray, NSString, NSURL, UIImage;

@interface TTMAssetRemoteVideo : TTMAsset <TIPImageFetchDelegate>

@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *previewVideoURL;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (nonatomic) _Bool renderingPreviewAsset;
@property (retain, nonatomic) NSMutableArray *renderPreviewAssetCompletions;
@property (nonatomic) _Bool renderingPreview;
@property (retain, nonatomic) NSMutableArray *renderPreviewCompletions;
@property (retain, nonatomic) UIImage *cachedPreviewImage;
@property (nonatomic) _Bool renderingFinalData;
@property (retain, nonatomic) NSMutableArray *renderFinalDataCompletions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoURL:(id)url previewVideoURL:(id)url previewImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)_ttm_renderPreviewImageURLWithOptions:(id)options completion:(id /* block */)completion;
- (void)_ttm_renderPreviewVideoURLWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderPreviewPlayerMediaWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (_Bool)isRenderingPreviewAsset;
- (_Bool)isRenderingPreview;
- (_Bool)isRenderingFinalData;

@end

#endif /* TTMAssetRemoteVideo_h */
