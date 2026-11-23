//
#ifndef T1CameraCapturePresenterDelegate_Protocol_h
#define T1CameraCapturePresenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCapturePresenterDelegate <NSObject>

@required

/* required instance methods */
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;

@optional

/* optional instance methods */
- (void)cameraCapturePresenterDidFinishAnimatingCancelNativeCameraViewController;

@end

#endif /* T1CameraCapturePresenterDelegate_Protocol_h */
