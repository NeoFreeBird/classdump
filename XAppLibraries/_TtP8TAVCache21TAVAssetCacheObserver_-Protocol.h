//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
