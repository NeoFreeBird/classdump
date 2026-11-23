//
#ifndef PTVVideoProcessorDelegate_Protocol_h
#define PTVVideoProcessorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoProcessorDelegate <NSObject>

@required

/* required instance methods */
- (void)videoProcessor:(id)processor didRenderBuffer:(struct __CVBuffer *)buffer withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time captureContext:(struct { long long x0; })context;
- (void)videoProcessor:(id)processor didRenderBufferHQ:(struct __CVBuffer *)hq withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time captureContext:(struct { long long x0; })context;
- (_Bool)shouldSaveHighQuality;

@optional

@end

#endif /* PTVVideoProcessorDelegate_Protocol_h */
