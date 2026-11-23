//
#ifndef T1CameraCaptureViewControllerDelegate_Protocol_h
#define T1CameraCaptureViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCaptureViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)cameraCaptureViewController:(id)controller dismissWithResult:(id)result;

@optional

/* optional instance methods */
- (id)cameraCaptureViewControllerPreferredPresentation:(id)presentation;

@end

#endif /* T1CameraCaptureViewControllerDelegate_Protocol_h */
