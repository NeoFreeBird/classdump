//
#ifndef T1CameraCaptureCameraModeConfirmationViewControllerDelegate_Protocol_h
#define T1CameraCaptureCameraModeConfirmationViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCaptureCameraModeConfirmationViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraCaptureCameraModeConfirmationControllerDidCancel:(id)cancel;
- (void)cameraCaptureCameraModeConfirmationController:(id)controller didAddAttachment:(id)attachment;

@end

#endif /* T1CameraCaptureCameraModeConfirmationViewControllerDelegate_Protocol_h */
