//
#ifndef TAVLHLSPixelBufferSource_h
#define TAVLHLSPixelBufferSource_h
@import Foundation;

#include "TAVPixelBufferSource-Protocol.h"

@class NSObject;

@interface TAVLHLSPixelBufferSource : NSObject <TAVPixelBufferSource> {
    /* instance variables */
    double _presentationTime;
    struct __CVBuffer * _buffer;
    _Bool _read;
}

/* instance methods */
- (void)updateWithPixelBuffer:(struct __CVBuffer *)buffer time:(double)time;
- (void)dealloc;
- (struct __CVBuffer *)lastAcquiredPixelBuffer;
- (_Bool)hasNewPixelBufferForTime:(double)time;
- (struct __CVBuffer *)copyPixelBufferForTime:(double)time;
- (struct opaqueCMSampleBuffer *)copySampleBufferForTime:(double)time;
- (void)captureSnapshotWithCompletion:(id /* block */)completion;

@end

#endif /* TAVLHLSPixelBufferSource_h */
