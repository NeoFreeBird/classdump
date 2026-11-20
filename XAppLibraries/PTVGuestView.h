//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestView_h
#define PTVGuestView_h
@import Foundation;

#include "PTVGuestAudioView.h"
#include "PTVGuestViewDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVVideoViewDelegate-Protocol.h"
#include "RTCVideoRenderer-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class AVCaptureVideoPreviewLayer, NSNumber, NSString, NSURL, UIView, UIViewController;

@interface PTVGuestView : UIView <PTVVideoViewDelegate, TAVPlaybackObserver, RTCVideoRenderer>

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
@property (weak, nonatomic) UIViewController *mainPlayer;
@property (weak, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) PTVGuestAudioView *audioModeOverrideView;
@property (nonatomic) struct CGSize { double x0; double x1; } aspectFillSize;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) long long participantIndex;
@property (nonatomic) _Bool isMuted;
@property (retain, nonatomic) NSNumber *audioLevel;
@property (nonatomic) _Bool aspectFill;
@property (nonatomic) unsigned long long loadingBarsStyle;
@property (nonatomic) _Bool areLoadingBarsAnimating;
@property (nonatomic) double chatSectionBottomBarHeight;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) double videoAspect;
@property (nonatomic) _Bool shouldAdjustFrameBasedOnNotch;
@property (retain, nonatomic) NSString *overlayName;
@property (weak, nonatomic) id <PTVGuestViewDelegate> delegate;
@property (readonly, nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithParticipantIndex:(long long)index loggedInUser:(id)user;
- (id)initWithParticipantIndex:(long long)index userID:(id)id imageURL:(id)url loggedInUser:(id)user;
- (void)layoutSubviews;
- (void)applyAspectFillSizeToCameraDisplayViewIfNeeded;
- (void)setBackgroundColor:(id)color;
- (void)switchToAudioMode;
- (void)switchToAudioModeWithGuestCallerController:(id)controller;
- (void)_ptv_configureAudioView:(id)view;
- (void)switchToVideoModeWithPreviewLayer:(id)layer;
- (void)switchToVideoModeWithCameraPreviewView:(id)view;
- (void)switchToVideoModeWithMainPlayer:(id)player;
- (void)switchToVideoModeWithGuestPlayer:(id)player scribePage:(id)page;
- (void)removeCurrentMode;
- (void)switchToVideoModeWithVideoTrack:(id)track;
- (void)executeAudioViewState;
- (void)executeVideoViewState;
- (_Bool)shouldCaptureStillImage;
- (void)captureStillImageWithCompletion:(id /* block */)completion;
- (id)cameraDisplayView;
- (id)videoView;
- (id)tavVideoView;
- (id)avrVideoView;
- (id)audioView;
- (void)renderFrame:(id)frame;
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)videoView:(id)view videoSizeDidChange:(struct CGSize { double x0; double x1; })change;
- (void)videoView:(id)view renderingDidChange:(_Bool)change;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* PTVGuestView_h */
