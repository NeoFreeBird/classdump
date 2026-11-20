//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVCaptureAudioDataOutputSampleBufferDelegate_Protocol_h
#define AVCaptureAudioDataOutputSampleBufferDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVCaptureAudioDataOutputSampleBufferDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;

@end

#endif /* AVCaptureAudioDataOutputSampleBufferDelegate_Protocol_h */
