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
