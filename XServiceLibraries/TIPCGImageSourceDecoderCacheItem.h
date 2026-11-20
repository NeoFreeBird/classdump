//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
