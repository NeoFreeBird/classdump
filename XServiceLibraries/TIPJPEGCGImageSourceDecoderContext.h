//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPJPEGCGImageSourceDecoderContext_h
#define TIPJPEGCGImageSourceDecoderContext_h
@import Foundation;

#include "TIPCGImageSourceDecoderContext.h"

@interface TIPJPEGCGImageSourceDecoderContext : TIPCGImageSourceDecoderContext {
    /* instance variables */
    _Bool _lastByteWasEscapeMarker;
}

/* instance methods */
- (_Bool)readContextualHeaders;
- (_Bool)readMore:(_Bool)more;

@end

#endif /* TIPJPEGCGImageSourceDecoderContext_h */
