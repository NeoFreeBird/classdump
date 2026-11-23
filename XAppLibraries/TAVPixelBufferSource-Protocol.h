//
#ifndef TAVPixelBufferSource_Protocol_h
#define TAVPixelBufferSource_Protocol_h
@import Foundation;

@protocol TAVPixelBufferSource

@required

/* required instance methods */
- (struct __CVBuffer *)lastAcquiredPixelBuffer;
- (_Bool)hasNewPixelBufferForTime:(double)time;
- (struct __CVBuffer *)copyPixelBufferForTime:(double)time;
- (struct opaqueCMSampleBuffer *)copySampleBufferForTime:(double)time;
- (void)captureSnapshotWithCompletion:(id /* block */)completion;

@optional

/* optional instance methods */
- (struct opaqueCMSampleBuffer *)copySampleBufferForTime:(double)time itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)display;

@end

#endif /* TAVPixelBufferSource_Protocol_h */
