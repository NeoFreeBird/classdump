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
