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
