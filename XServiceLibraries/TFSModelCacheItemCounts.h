//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheItemCounts_h
#define TFSModelCacheItemCounts_h
@import Foundation;

#include "TFSModelCachePerTypeItemCounts.h"

@class NSDictionary, NSMutableDictionary, NSObject;

@interface TFSModelCacheItemCounts : NSObject

@property (readonly, nonatomic) NSDictionary *typeNameToItemCounts;
@property (readonly, nonatomic) TFSModelCachePerTypeItemCounts *itemCountsForAllTypes;

/* instance methods */
- (id)init;
- (void)incrementForRetention:(long long)retention typeName:(id)name;

@end

#endif /* TFSModelCacheItemCounts_h */
