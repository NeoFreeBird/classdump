//
#ifndef AVCaptureVideoDataOutputSampleBufferDelegate_Protocol_h
#define AVCaptureVideoDataOutputSampleBufferDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (void)captureOutput:(id)output didDropSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (void)captureOutput:(id)output didDropSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;

@end

#endif /* AVCaptureVideoDataOutputSampleBufferDelegate_Protocol_h */
