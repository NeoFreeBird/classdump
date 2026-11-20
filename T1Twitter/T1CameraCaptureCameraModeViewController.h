//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraCaptureCameraModeViewController_h
#define T1CameraCaptureCameraModeViewController_h
@import Foundation;

#include "PTVTwitterCameraCaptureDelegate-Protocol.h"
#include "T1CameraCaptureCameraModeConfirmationViewController.h"
#include "T1CameraCaptureCameraModeConfirmationViewControllerDelegate-Protocol.h"
#include "T1CameraCaptureCameraModeRecordViewController.h"
#include "T1CameraCaptureCameraModeRecordViewControllerDelegate-Protocol.h"
#include "T1CameraCaptureCameraScribeValue.h"
#include "T1CameraCaptureOutput.h"
#include "T1CameraCaptureViewController.h"
#include "T1CameraCaptureViewControllerCameraSessionDelegate-Protocol.h"
#include "TFNSwappingContainerViewControllerHelperDelegate-Protocol.h"

@class NSString, TFNSwappingContainerViewControllerHelper, TFNViewController, TFSReferencedFile, TFSTwitterScribeContext, UIView, UIViewController;

@interface T1CameraCaptureCameraModeViewController : TFNViewController <T1CameraCaptureCameraModeConfirmationViewControllerDelegate, T1CameraCaptureCameraModeRecordViewControllerDelegate, T1CameraCaptureViewControllerCameraSessionDelegate, TFNSwappingContainerViewControllerHelperDelegate, PTVTwitterCameraCaptureDelegate>

@property (readonly, weak, nonatomic) T1CameraCaptureViewController *captureViewController;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) T1CameraCaptureCameraModeRecordViewController *recordViewController;
@property (retain, nonatomic) T1CameraCaptureCameraModeConfirmationViewController *confirmationViewController;
@property (nonatomic) unsigned long long recordingState;
@property (nonatomic) _Bool recordingReachedMinimumThreshold;
@property (retain, nonatomic) TFSReferencedFile *referencedRecordingWorkingDirectory;
@property (nonatomic) double initialCameraZoomValueForRecording;
@property (retain, nonatomic) T1CameraCaptureCameraScribeValue *initialCameraScribeValue;
@property (retain, nonatomic) T1CameraCaptureOutput *captureOutput;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (nonatomic) unsigned long long captureMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *swappingContainerView;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithCaptureViewController:(id)controller featureSwitches:(id)switches;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)animated;
- (id)_t1_main_loadRecordViewController;
- (id)_t1_main_loadConfirmationViewController;
- (void)_t1_main_updateRecordingState;
- (void)_t1_main_updateRecordingViewController;
- (void)_t1_main_updateConfirmationViewController;
- (void)_t1_main_updateCaptureViewController;
- (void)_t1_main_purgeWorkingDirectoryAndCapturedData;
- (void)viewDidLoad;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)didReceiveMemoryWarning;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)coordinator;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)viewControllerWillPresentAnimated:(_Bool)animated;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)cameraCaptureCameraModeRecordViewControllerDidStartRecording:(id)recording;
- (void)cameraCaptureCameraModeRecordViewControllerDidStopRecording:(id)recording;
- (void)cameraCaptureCameraModeRecordViewController:(id)controller didChangeZoomScale:(double)scale;
- (void)cameraCaptureViewController:(id)controller didChangeCameraSessionState:(unsigned long long)state;
- (void)_t1_main_startRecording;
- (void)_t1_main_requestStopRecording;
- (void)_t1_main_stopRecording;
- (void)_t1_main_capturePhoto;
- (void)twitterCameraCaptureVideoReachedMinimumThreshold;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)duration;
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(id)transition;
- (void)twitterCameraCaptureDidRenderVideoURL:(id)url error:(id)error;
- (void)_t1_main_didCaptureVideoURL:(id)url;
- (void)twitterCameraCaptureDidCapturePhoto:(id)photo error:(id)error;
- (void)_t1_main_didCapturePhotoImageData:(id)data;
- (void)cameraCaptureCameraModeConfirmationControllerDidCancel:(id)cancel;
- (void)cameraCaptureCameraModeConfirmationController:(id)controller didAddAttachment:(id)attachment;

@end

#endif /* T1CameraCaptureCameraModeViewController_h */
