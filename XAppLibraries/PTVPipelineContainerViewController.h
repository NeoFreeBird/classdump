//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPipelineContainerViewController_h
#define PTVPipelineContainerViewController_h
@import Foundation;

#include "PTVGuestPublishingViewController.h"
#include "PTVPipelineContainerViewControllerDelegate-Protocol.h"
#include "PTVPipelineOwner-Protocol.h"
#include "PTVPublishingPipeline.h"
#include "PTVPublishingPipelineDelegate-Protocol.h"
#include "PTVPublishingViewController.h"

@class NSString, UIViewController;

@interface PTVPipelineContainerViewController : UIViewController <PTVPublishingPipelineDelegate, PTVPipelineOwner> {
    /* instance variables */
    PTVPipelineContainerViewController *_weakSelf;
    _Bool _isObservingPublishingViewController;
    _Bool _isObservingGuestPublishingViewController;
    _Bool _isObservingGuestPublishingCoordinator;
    _Bool _stabilizationEnabled;
    _Bool _customPreviewEnabled;
}

@property (readonly, nonatomic) _Bool isCameraActive;
@property (readonly, nonatomic) _Bool isAudioScopeSelected;
@property (retain) PTVPublishingPipeline *sourcePipeline;
@property (weak, nonatomic) id <PTVPipelineContainerViewControllerDelegate> delegate;
@property (readonly) PTVPublishingPipeline *sourcePipelineIfLoaded;
@property (readonly, nonatomic) _Bool isPublishing;
@property (retain) UIViewController *currentPublishingViewController;
@property (readonly, nonatomic) PTVPublishingViewController *publishingViewController;
@property (readonly, nonatomic) PTVGuestPublishingViewController *guestPublishingViewController;
@property (nonatomic) _Bool isHostedByNewsCamera;
@property (readonly) _Bool saveAsHQEnabled;
@property (nonatomic) _Bool disableBFrames;
@property (nonatomic) _Bool isHEVCEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setAudioScopeSelected:(_Bool)selected;
- (void)setAudioVisualizerProfileImageURL:(id)url;
- (void)flipCamera;
- (void)captureThumbnail:(id /* block */)thumbnail;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)viewDidLoad;
- (void)loadView;
- (id)publishingContainerView;
- (id)initWithDelegate:(id)delegate stabilizationEnabled:(_Bool)enabled saveAsHQEnabled:(_Bool)hqenabled customPreviewEnabled:(_Bool)enabled;
- (void)handleInterfaceOrientation:(long long)orientation;
- (unsigned long long)ntpForCurrentFrame;
- (void)publishingStateDidChange;
- (void)audioPresentStateDidChange;
- (void)startCamera;
- (void)disconnectWithCompletion:(id /* block */)completion;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (void)onEnterBackgroundOrIncomingPhoneCall;
- (void)resignActive;
- (void)becomeActive;
- (_Bool)audioPresent;
- (void)willReplaceCurrentPublishingViewControllerWithViewController:(id)controller;
- (void)updateViewHierarchy;
- (void)didReplaceCurrentPublishingViewControllerWithViewController:(id)controller;
- (id)currentPipelineUser;
- (void)willChangePipelineUser;
- (void)didChangePipelineUser;
- (void)observeViewControllers;
- (void)unobserveViewControllers;
- (_Bool)isUsingDefaultPublishingViewController;
- (void)observePublishingViewController;
- (void)unobservePublishingViewController;
- (_Bool)isUsingGuestPublishingViewController;
- (id)guestPublishingCoordinator;
- (void)observeGuestPublishingViewController;
- (void)unobserveGuestPublishingViewController;
- (void)observeGuestPublishingCoordinator;
- (void)unobserveGuestPublishingCoordinator;
- (void)showCameraPreviewIfNeeded;
- (void)didChangeSourcePipelineBroadcastingState;
- (void)cameraStartComplete;
- (void)cameraStartFailed;
- (void)imageRotation:(double)rotation immediate:(_Bool)immediate;
- (void)updateVideoOrientation;
- (void)noteCameraChange;
- (void)onCameraTypeChange:(long long)change;
- (void)attemptReconnect;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)publishingPipeline:(id)pipeline willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)publishingPipeline:(id)pipeline didReceiveLogEntry:(id)entry;
- (_Bool)publishingPipelineDefaultsInFrontPosition;

@end

#endif /* PTVPipelineContainerViewController_h */
