//
#ifndef _TtP8TAVCache21TAVAssetCacheObserver__Protocol_h
#define _TtP8TAVCache21TAVAssetCacheObserver__Protocol_h
@import Foundation;

@class NSURL;

@protocol TAVCache.TAVAssetCacheObserver

@required

@property (readonly, copy, nonatomic) NSURL *assetCacheURL;

/* required instance methods */
- (void)assetCacheDidUpdateRecord:(id)record;

@optional

@end

#endif /* _TtP8TAVCache21TAVAssetCacheObserver__Protocol_h */
