//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNViewCache_h
#define TFNViewCache_h
@import Foundation;

#include "TFSObjectCache.h"

@class NSMutableDictionary, NSObject;

@interface TFNViewCache : NSObject

@property (readonly, nonatomic) TFSObjectCache *viewCache;
@property (readonly, nonatomic) NSMutableDictionary *viewMetadata;
@property (nonatomic) unsigned long long viewCountLimit;
@property (copy, nonatomic) id /* block */ didEvictViewBlock;

/* instance methods */
- (id)init;
- (id)initWithViewCountLimit:(long long)limit;
- (id)dequeueViewForIdentifier:(id)identifier;
- (void)enqueueView:(id)view forIdentifier:(id)identifier;
- (void)removeAllViews;
- (id)_tfn_existingViewMetadataForIdentifier:(id)identifier;

@end

#endif /* TFNViewCache_h */
