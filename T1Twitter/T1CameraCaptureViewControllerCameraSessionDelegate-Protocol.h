//
#ifndef T1CameraCaptureViewControllerCameraSessionDelegate_Protocol_h
#define T1CameraCaptureViewControllerCameraSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCaptureViewControllerCameraSessionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraCaptureViewController:(id)controller didChangeCameraSessionState:(unsigned long long)state;

@end

#endif /* T1CameraCaptureViewControllerCameraSessionDelegate_Protocol_h */
