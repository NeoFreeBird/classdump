//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageDiskCacheEntry_h
#define TIPImageDiskCacheEntry_h
@import Foundation;

#include "TIPImageCacheEntry.h"
#include "TIPImageDiskCacheTemporaryFile.h"

@class NSString;

@interface TIPImageDiskCacheEntry : TIPImageCacheEntry {
    /* instance variables */
    TIPImageDiskCacheTemporaryFile *_tempFile;
}

@property (readonly, copy, nonatomic) NSString *safeIdentifier;
@property (nonatomic) unsigned long long completeFileSize;
@property (nonatomic) unsigned long long partialFileSize;

/* instance methods */
- (void)setIdentifier:(id)identifier;
- (id)LRUEntryIdentifier;
- (id)initWithCacheEntry:(id)entry;

@end

#endif /* TIPImageDiskCacheEntry_h */
