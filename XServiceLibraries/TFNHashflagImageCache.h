//
#ifndef TFNHashflagImageCache_h
#define TFNHashflagImageCache_h
@import Foundation;

#include "TFSObjectCache.h"

@class NSObject;

@interface TFNHashflagImageCache : NSObject

@property (readonly, nonatomic) TFSObjectCache *cache;

/* instance methods */
- (id)initWithUniqueIdentifier:(id)identifier;
- (id)init;
- (id)imageForURL:(id)url;
- (void)removeImageForURL:(id)url;
- (void)clearCache;
- (void)setImage:(id)image forURL:(id)url;

@end

#endif /* TFNHashflagImageCache_h */
