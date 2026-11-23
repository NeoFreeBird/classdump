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
