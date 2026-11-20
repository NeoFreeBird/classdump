//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheDataEventCounts_h
#define TFSModelCacheDataEventCounts_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSModelCacheDataEventCounts : NSObject <NSCopying>

@property (nonatomic) long long memoryCacheHitCount;
@property (nonatomic) long long diskCacheHitCount;
@property (nonatomic) long long diskCacheMissCount;
@property (nonatomic) long long addCount;
@property (nonatomic) long long removeCount;
@property (nonatomic) long long memoryCacheRemovalByLostOwnershipCount;
@property (nonatomic) long long memoryCacheAgeOutCount;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSModelCacheDataEventCounts_h */
