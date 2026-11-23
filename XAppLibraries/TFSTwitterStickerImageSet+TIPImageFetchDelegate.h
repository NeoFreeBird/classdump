//
#ifndef TFSTwitterStickerImageSet_TIPImageFetchDelegate_h
#define TFSTwitterStickerImageSet_TIPImageFetchDelegate_h
@import Foundation;

@interface TFSTwitterStickerImageSet (TIPImageFetchDelegate) <TIPImageFetchDelegate>

/* instance methods */
- (_Bool)shouldRefetchWhenResizedFromDimensions:(struct CGSize { double x0; double x1; })dimensions toDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (void)fetchImageForSize:(struct CGSize { double x0; double x1; })size enablePreview:(_Bool)preview imagePipeline:(id)pipeline completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadPreviewImage:(id)image completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (void)tip_imageFetchOperation:(id)operation didFailToLoadFinalImage:(id)image;

@end

#endif /* TFSTwitterStickerImageSet_TIPImageFetchDelegate_h */
