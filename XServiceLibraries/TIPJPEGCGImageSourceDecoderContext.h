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
