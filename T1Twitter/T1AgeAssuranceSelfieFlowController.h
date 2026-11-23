//
#ifndef T1AgeAssuranceSelfieFlowController_h
#define T1AgeAssuranceSelfieFlowController_h
@import Foundation;

#include "T1CameraCapturePresenterDelegate-Protocol.h"

@class UIViewController;

@interface T1AgeAssuranceSelfieFlowController : UIViewController <T1CameraCapturePresenterDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *ageVerificationCompletion;
    NSNumber"16@0:8 *cameraCapturePresenter;
    NSNumber"16@0:8 *cameraViewController;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *countryCode;
}

/* class methods */
+ (id)didVerifyAgeForSensitiveMediaNotificationName;

/* instance methods */
- (void)cameraCapturePresenterDidFinishAnimatingCancelNativeCameraViewController;
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;
- (id)initWithCoder:(id)coder;
- (void)navigateToCamera;
- (void)navigateToPersonaFlow;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1AgeAssuranceSelfieFlowController_h */
