//
#ifndef PTVVideoViewController_h
#define PTVVideoViewController_h
@import Foundation;

#include "PTVAccessVideo.h"
#include "PTVBroadcast.h"
#include "PTVVideoView.h"
#include "PTVVideoViewControllerDelegate-Protocol.h"

@class UIViewController;

@interface PTVVideoViewController : UIViewController {
    /* instance variables */
    PTVVideoViewController *_weakSelf;
}

@property (weak, nonatomic) id <PTVVideoViewControllerDelegate> delegate;
@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) PTVAccessVideo *videoAccess;
@property (nonatomic) _Bool aspectFill;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } displaySize;
@property (readonly, nonatomic) PTVVideoView *videoView;
@property (readonly, nonatomic) PTVVideoView *videoViewIfLoaded;
@property (nonatomic) _Bool shouldWaitForRotationDataBeforeShowingVideo;
@property (nonatomic) _Bool shouldAnimateRotations;
@property (readonly, nonatomic) _Bool canShowVideo;
@property (readonly, nonatomic) _Bool shouldCaptureStillImageOfVideoPlayer;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)shouldShowVideo;
- (_Bool)hasReceivedVideoRotation;
- (_Bool)videoMatchesDeviceOrientation;
- (void)showVideoIfNeeded;
- (void)mainThread_showVideoIfNeeded;
- (void)videoWillShow;
- (void)videoDidShow;
- (void)setCanShowVideo:(_Bool)video animated:(_Bool)animated completion:(id /* block */)completion;
- (void)updateRotation:(double)rotation displaySize:(struct CGSize { double x0; double x1; })size;
- (void)didUpdateVideoDimensions;
- (void)didUpdateChatSectionBottomBarHeight:(double)height;
- (void)broadcastEndPending;

@end

#endif /* PTVVideoViewController_h */
