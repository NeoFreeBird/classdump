//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCachePerTypeItemCounts_h
#define TFSModelCachePerTypeItemCounts_h
@import Foundation;

@class NSObject;

@interface TFSModelCachePerTypeItemCounts : NSObject

@property (nonatomic) long long unevictable;
@property (nonatomic) long long owned;
@property (nonatomic) long long evictable;
@property (readonly, nonatomic) long long all;

@end

#endif /* TFSModelCachePerTypeItemCounts_h */
