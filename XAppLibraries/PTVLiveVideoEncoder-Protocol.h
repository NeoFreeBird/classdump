//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVLiveVideoEncoder_Protocol_h
#define PTVLiveVideoEncoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVAVEncoderDelegate-Protocol.h"

@protocol PTVLiveVideoEncoder <NSObject>

@required

@property (weak, nonatomic) id <PTVAVEncoderDelegate> delegate;

/* required instance methods */
- (void)setSettings:(id)settings;
- (void)encodeWithBlock:(id /* block */)block onParams:(id /* block */)params;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)frame;
- (void)encodeBuffer:(struct __CVBuffer *)buffer time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)getConfigData;
- (void)shutdown;
- (struct __CVPixelBufferPool *)bufferPool;
- (void)setMetadata:(id)metadata immediate:(_Bool)immediate;
- (void)setBlank:(_Bool)blank;
- (void)requestKeyframe;
- (void)signalSourceChange;

@optional

@end

#endif /* PTVLiveVideoEncoder_Protocol_h */
