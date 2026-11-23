//
#ifndef TTMLocalMediaAssetCache_h
#define TTMLocalMediaAssetCache_h
@import Foundation;

@class NSMutableDictionary, NSObject, TIPImagePipeline;
@protocol OS_dispatch_queue;

@interface TTMLocalMediaAssetCache : NSObject {
    /* instance variables */
    TIPImagePipeline *_imagePipeline;
    NSMutableDictionary *_assetCounterMap;
    NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)cacheForImagePipeline:(id)pipeline;
+ (id)_ttm_localURLForMediaAsset:(id)asset;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline;
- (id)init;
- (id)addMediaAsset:(id)asset;
- (void)addMediaAsset:(id)asset completion:(id /* block */)completion;
- (id)_ttm_addMediaAsset:(id)asset completion:(id /* block */)completion;
- (void)removeMediaAssetForURL:(id)url;

@end

#endif /* TTMLocalMediaAssetCache_h */
