//
#ifndef TIPCGImageSourceDecoderCacheItem_h
#define TIPCGImageSourceDecoderCacheItem_h
@import Foundation;

#include "TIPImageContainer.h"

@class NSObject;

@interface TIPCGImageSourceDecoderCacheItem : NSObject {
    /* instance variables */
    TIPImageContainer *_imageContainer;
    long long _renderMode;
    unsigned long long _imageByteCount;
}

/* instance methods */

@end

#endif /* TIPCGImageSourceDecoderCacheItem_h */
