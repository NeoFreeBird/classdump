//
#ifndef _TtCC6CallUI24CallPixelBufferVideoViewP33_F380BAF654955C92ECFEAFA385BCF7059FrameSink_h
#define _TtCC6CallUI24CallPixelBufferVideoViewP33_F380BAF654955C92ECFEAFA385BCF7059FrameSink_h
@import Foundation;

#include "RTCVideoRenderer-Protocol.h"

@class NSObject;

@interface CallUI.CallPixelBufferVideoView.(FrameSink in _F380BAF654955C92ECFEAFA385BCF705) : NSObject <RTCVideoRenderer> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 renderer;
}

/* instance methods */
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)renderFrame:(id)frame;
- (id)init;

@end

#endif /* _TtCC6CallUI24CallPixelBufferVideoViewP33_F380BAF654955C92ECFEAFA385BCF7059FrameSink_h */
