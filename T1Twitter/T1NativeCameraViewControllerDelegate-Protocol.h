//
#ifndef T1NativeCameraViewControllerDelegate_Protocol_h
#define T1NativeCameraViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NativeCameraViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)nativeCameraViewController:(id)controller didCaptureAttachment:(id)attachment;
- (void)nativeCameraViewControllerDidCancel:(id)cancel;

@end

#endif /* T1NativeCameraViewControllerDelegate_Protocol_h */
