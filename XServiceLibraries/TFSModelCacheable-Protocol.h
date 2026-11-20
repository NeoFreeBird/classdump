//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheable_Protocol_h
#define TFSModelCacheable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TFSModelCacheable <NSObject>

@required

@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) _Bool isAutomaticUncachingEnabled;
@property (nonatomic, readonly) NSArray *ownedCacheKeys;

@optional

@end

#endif /* TFSModelCacheable_Protocol_h */
