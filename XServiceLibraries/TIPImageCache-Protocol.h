//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageCache_Protocol_h
#define TIPImageCache_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TIPLRUCache.h"

@protocol TIPImageCache <NSObject>

@required

@property (readonly, nonatomic) long long cacheType;
@property (readonly, nonatomic) TIPLRUCache *manifest;
@property (readonly, nonatomic) unsigned long long totalCost;

/* required instance methods */
- (void)clearAllImages:(id /* block */)images;
- (void)clearImageWithIdentifier:(id)identifier;

@optional

@end

#endif /* TIPImageCache_Protocol_h */
