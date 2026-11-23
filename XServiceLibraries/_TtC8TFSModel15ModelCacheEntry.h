//
#ifndef _TtC8TFSModel15ModelCacheEntry_h
#define _TtC8TFSModel15ModelCacheEntry_h
@import Foundation;

#include "TFSModelCacheable-Protocol.h"

@class NSArray, NSObject, NSString, TFSModel.ModelCacheEncoder, TFSModel.ModelObject;

@interface TFSModel.ModelCacheEntry : NSObject <TFSModelCacheable> { // (Swift)
    /* instance variables */
    TFSModel.ModelObject cacheableModel;
    TFSModel.ModelCacheEncoder cacheEncoder;
}

@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) _Bool isAutomaticUncachingEnabled;
@property (nonatomic, readonly) NSArray *ownedCacheKeys;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8TFSModel15ModelCacheEntry_h */
