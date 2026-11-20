//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
