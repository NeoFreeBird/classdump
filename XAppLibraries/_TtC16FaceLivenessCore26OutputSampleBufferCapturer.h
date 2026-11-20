//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16FaceLivenessCore26OutputSampleBufferCapturer_h
#define _TtC16FaceLivenessCore26OutputSampleBufferCapturer_h
@import Foundation;

#include "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class FaceLivenessCore.FaceDetector, FaceLivenessCore.VideoChunker, NSObject;

@interface FaceLivenessCore.OutputSampleBufferCapturer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> { // (Swift)
    /* instance variables */
    FaceLivenessCore.FaceDetector faceDetector;
    FaceLivenessCore.VideoChunker videoChunker;
}

/* instance methods */
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (id)init;

@end

#endif /* _TtC16FaceLivenessCore26OutputSampleBufferCapturer_h */
