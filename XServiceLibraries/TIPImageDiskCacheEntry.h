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
