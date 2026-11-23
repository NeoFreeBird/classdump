//
#ifndef T1CameraCapturePresenter_h
#define T1CameraCapturePresenter_h
@import Foundation;

#include "T1CameraCaptureContext.h"
#include "T1CameraCapturePresenterDelegate-Protocol.h"
#include "T1CameraCaptureViewControllerDelegate-Protocol.h"
#include "T1NativeCameraViewControllerDelegate-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFNTwitterCompositionAttachments, TFSTwitterScribeContext;

@interface T1CameraCapturePresenter : NSObject <T1CameraCaptureViewControllerDelegate, T1NativeCameraViewControllerDelegate>

@property (retain, nonatomic) TFNTwitterCompositionAttachments *attachments;
@property (readonly, nonatomic) T1CameraCaptureContext *cameraContext;
@property (readonly, nonatomic) _Bool prefersFrontFacingCamera;
@property (weak, nonatomic) id <T1CameraCapturePresenterDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) unsigned long long attachmentTypes;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithCameraContext:(id)context account:(id)account prefersFrontFacingCamera:(_Bool)camera;
- (void)presentCameraFromViewController:(id)controller;
- (void)cameraCaptureViewController:(id)controller dismissWithResult:(id)result;
- (id)cameraCaptureViewControllerPreferredPresentation:(id)presentation;
- (void)nativeCameraViewController:(id)controller didCaptureAttachment:(id)attachment;
- (void)nativeCameraViewControllerDidCancel:(id)cancel;
- (void)_t1_presentCameraViewControllerFromViewController:(id)controller;
- (void)_t1_presentLegacyCameraViewControllerWithAuthorizationFromViewController:(id)controller;
- (void)_t1_presentLegacyCameraViewControllerFromViewController:(id)controller;
- (void)_t1_cameraViewController:(id)controller finishWithAttachment:(id)attachment;

@end

#endif /* T1CameraCapturePresenter_h */
