//
#ifndef T1MediaAttachmentViewLivePhotoRenderCache_h
#define T1MediaAttachmentViewLivePhotoRenderCache_h
@import Foundation;

#include "T1MediaAttachmentViewRenderingDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, TFNAnimatedGifImage;

@interface T1MediaAttachmentViewLivePhotoRenderCache : NSObject <T1MediaAttachmentViewRenderingDelegate>

@property (retain, nonatomic) TFNAnimatedGifImage *lastAnimatedGIFImage;
@property (retain, nonatomic) NSString *lastAnimatedGIFLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *renderingCompletionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)cacheAnimatedMediaAsset:(id)asset withImagePipeline:(id)pipeline;
- (void)_t1_renderAnimatedImageAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;
- (void)clear;
- (void)attachmentView:(id)view renderAnimatedImageAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;

@end

#endif /* T1MediaAttachmentViewLivePhotoRenderCache_h */
