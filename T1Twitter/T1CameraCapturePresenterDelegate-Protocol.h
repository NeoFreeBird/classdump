//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
