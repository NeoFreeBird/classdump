//
#ifndef AVCaptureMetadataOutputObjectsDelegate_Protocol_h
#define AVCaptureMetadataOutputObjectsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVCaptureMetadataOutputObjectsDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)captureOutput:(id)output didOutputMetadataObjects:(id)objects fromConnection:(id)connection;

@end

#endif /* AVCaptureMetadataOutputObjectsDelegate_Protocol_h */
