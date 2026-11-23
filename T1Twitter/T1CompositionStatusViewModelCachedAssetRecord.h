//
#ifndef T1CompositionStatusViewModelCachedAssetRecord_h
#define T1CompositionStatusViewModelCachedAssetRecord_h
@import Foundation;

@class NSObject, NSURL, TTMLocalMediaAssetCache;

@interface T1CompositionStatusViewModelCachedAssetRecord : NSObject

@property (readonly, nonatomic) TTMLocalMediaAssetCache *assetCache;
@property (readonly, nonatomic) NSURL *assetCacheURL;

/* instance methods */
- (id)initWithAssetCache:(id)cache assetCacheURL:(id)url;
- (id)init;
- (void)dealloc;

@end

#endif /* T1CompositionStatusViewModelCachedAssetRecord_h */
