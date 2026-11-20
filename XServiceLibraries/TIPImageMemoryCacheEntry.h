//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageMemoryCacheEntry_h
#define TIPImageMemoryCacheEntry_h
@import Foundation;

#include "TIPImageCacheEntry.h"

@interface TIPImageMemoryCacheEntry : TIPImageCacheEntry

@property (readonly, nonatomic) unsigned long long memoryCost;

/* instance methods */
- (void)setCompleteImage:(id)image;
- (void)setCompleteImageFilePath:(id)path;
- (void)setCompleteImageContext:(id)context;
- (void)setPartialImage:(id)image;
- (void)setPartialImageContext:(id)context;

@end

#endif /* TIPImageMemoryCacheEntry_h */
