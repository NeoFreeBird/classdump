//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
