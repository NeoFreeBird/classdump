//
#ifndef TIPJPEGCGImageSourceDecoder_h
#define TIPJPEGCGImageSourceDecoder_h
@import Foundation;

#include "TIPBasicCGImageSourceDecoder.h"

@interface TIPJPEGCGImageSourceDecoder : TIPBasicCGImageSourceDecoder

/* instance methods */
- (id)init;
- (id)tip_initiateDecoding:(id)decoding expectedDataLength:(unsigned long long)length buffer:(id)buffer;
- (_Bool)tip_supportsProgressiveDecoding;

@end

#endif /* TIPJPEGCGImageSourceDecoder_h */
