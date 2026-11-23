//
#ifndef TIPAnimatedCGImageSourceDecoder_h
#define TIPAnimatedCGImageSourceDecoder_h
@import Foundation;

#include "TIPBasicCGImageSourceDecoder.h"

@interface TIPAnimatedCGImageSourceDecoder : TIPBasicCGImageSourceDecoder

/* instance methods */
- (id)tip_initiateDecoding:(id)decoding expectedDataLength:(unsigned long long)length buffer:(id)buffer;

@end

#endif /* TIPAnimatedCGImageSourceDecoder_h */
