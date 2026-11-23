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
