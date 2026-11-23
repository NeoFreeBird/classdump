//
#ifndef T1CameraServiceAuthorizationViewControllerDelegate_Protocol_h
#define T1CameraServiceAuthorizationViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraServiceAuthorizationViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraServiceAuthorizationViewControllerDidTapDismiss:(id)dismiss;
- (void)cameraServiceAuthorizationViewController:(id)controller didChangeAuthorizationState:(unsigned long long)state;
- (void)cameraServiceAuthorizationViewController:(id)controller didChangeAuthorizationState:(unsigned long long)state;

@end

#endif /* T1CameraServiceAuthorizationViewControllerDelegate_Protocol_h */
