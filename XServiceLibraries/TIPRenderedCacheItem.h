//
#ifndef TIPRenderedCacheItem_h
#define TIPRenderedCacheItem_h
@import Foundation;

#include "TIPImageCacheEntry.h"

@class NSObject, NSString, UIImage;

@interface TIPRenderedCacheItem : NSObject {
    /* instance variables */
    id _weakifyDescriptor;
    UIImage *_weakifyImage;
    _Bool _dirty;
    NSString *_transformerIdentifier;
    TIPImageCacheEntry *_entry;
    struct CGSize { double width; double height; } _sourceImageDimensions;
}

/* instance methods */

@end

#endif /* TIPRenderedCacheItem_h */
