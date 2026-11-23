//
#ifndef PTVCameraPreviewGuestCallViewController_h
#define PTVCameraPreviewGuestCallViewController_h
@import Foundation;

#include "PTVBroadcastOverflowTableViewController.h"
#include "PTVBroadcastWatcher.h"
#include "PTVGuestAnalyticsManager.h"
#include "PTVGuestView.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "TAVSharedAudioSessionConfigurationToken.h"

@class AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSIndexPath, NSObject, NSTimer;

@interface PTVCameraPreviewGuestCallViewController : PTVBroadcastOverflowTableViewController {
    /* instance variables */
    NSIndexPath *_indexPathForCameraPreview;
    long long _participantIndex;
    PTVCameraPreviewGuestCallViewController *_weakSelf;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureAudioDataOutput *_audioOutput;
    TAVSharedAudioSessionConfigurationToken *_sharedAudioSessionToken;
}

@property (retain, nonatomic) PTVGuestView *audioOnlyPreview;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (retain, nonatomic) PTVGuestView *videoPreviewView;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) NSTimer *audioLevelTimer;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) PTVGuestView *sharedVideoPreviewView;
@property (readonly, nonatomic) PTVBroadcastWatcher *watcher;
@property (readonly, nonatomic) PTVGuestAnalyticsManager *analyticsManager;

/* instance methods */
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (id)initWithSharedVideoPreviewView:(id)view watcher:(id)watcher;
- (void)setupCaptureSessionIfNeeded;
- (void)restartExistingCaptureSessionIfNeeded;
- (void)setupCaptureSessionShouldAddCameraInput:(_Bool)input shouldAddMicrophoneInput:(_Bool)input;
- (void)addCameraInput;
- (void)addMicrophoneInput;
- (void)cameraSetupDidComplete;
- (void)microphoneSetupDidComplete;
- (void)shutdownCameraSessionIfNeeded;
- (void)shutdownAudioAnimationsIfNeeded;
- (void)startAudioLevelTimer;
- (double)calculateAudioLevel;
- (void)checkAudioLevel;
- (void)setupVideoPreviewIfNeeded;
- (void)updateVideoPreviewOrientationIfNeeded;

@end

#endif /* PTVCameraPreviewGuestCallViewController_h */
