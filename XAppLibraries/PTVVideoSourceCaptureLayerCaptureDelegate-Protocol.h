//
#ifndef PTVVideoSourceCaptureLayerCaptureDelegate_Protocol_h
#define PTVVideoSourceCaptureLayerCaptureDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoSourceCaptureLayerCaptureDelegate <NSObject>

@required

/* required instance methods */
- (void)videoSourceCaptureLayer:(id)layer willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame completionBlock:(id /* block */)block;
- (void)videoSourceCaptureLayer:(id)layer didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromCaptureOutput:(id)output fromConnection:(id)connection;

@optional

@end

#endif /* PTVVideoSourceCaptureLayerCaptureDelegate_Protocol_h */
